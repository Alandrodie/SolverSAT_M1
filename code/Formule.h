#ifndef FORMULE_H_
#define FORMULE_H_

#include "Clause.h"

using namespace std;
class Formule
{
    public:
        Formule();
        virtual ~Formule();

        Formule simplify(int l);
        Formule backtracking();
        void addClause(Clause c);
        vector<Clause> getClauses();
        vector<int> getVariables();
        bool containsEmptyClause();
        
    private:
        vector<Clause> formule;
        vector<int> variablesFormule;

};

#endif
    

