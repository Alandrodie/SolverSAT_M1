
#include "Solveur.h"

Solveur::Solveur()
{
    solution = vector<int>();
    
}

Solveur::~Solveur()
{
    
}

Formule Solveur::simplify(Formule formule, int l)
{
    Formule res;
    res.setvariablesFormule(formule.getVariables());
    for(Clause c : formule.getClauses())
    {

        bool find;


        for (int curr_l :  c.getLitterals())
        {
            

            if (l == curr_l || -l == curr_l)
            {
                find = true;
                continue;

            }
        }
        if (!find)
        {
            res.addClause(c);
        }

    }
    return res;


}
vector<int> Solveur::backtracking(Formule f)
{
    
        vector<int> variablesFormule = f.getVariables();
        int lit = variablesFormule[variablesFormule.size()-1];
        variablesFormule.pop_back();
        f.setvariablesFormule(variablesFormule);
        
        Formule f2 = simplify(f, lit);
        if (f2.getClauses().size() == 0)
        {
            solution.push_back(lit);
            return solution;
        }
        else
        {
            if (f2.containsEmptyClause())
            {
                Formule f3 = simplify (f, -lit);
                if (f3.getClauses().size() == 0)
                {
                    solution.push_back(-lit);
                    return solution;
                }
                else
                    if (f3.containsEmptyClause())
                        return solution;
                    else
                        return backtracking(f3);
            }
            else
            {
                return backtracking(f2);

            }
        }




}
