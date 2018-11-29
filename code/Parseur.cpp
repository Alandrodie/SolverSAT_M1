#include "Parseur.h"
#include <algorithm>



Parseur::Parseur(string path)
{
    this->path = path;

}

Parseur::~Parseur()
{
}

Formule Parseur::parseFormule(){

    ifstream fichier(path);
    
    if (fichier)
    {
        int nb_variables;
        int nb_lignes;
        
        


        //premiere ligne : 
        string  buffer;

        getline(fichier, buffer);

        stringstream ss = stringstream(buffer);

         //on ignore les 2 premiers mots
         getline(ss,buffer,' ');
         getline(ss,buffer,' ');

         getline(ss,buffer,' ');
        nb_variables = stoi(buffer);

         getline(ss,buffer,' ');
         nb_lignes = stoi(buffer);


        Formule res = Formule();


        //le reste
        while (getline(fichier, buffer))
        {
            stringstream ss = stringstream(buffer);
            vector<int> clause;
            while(getline(ss,buffer,' '))
            {
                int formule = stoi(buffer);
              

                if (formule != 0)
                {
                   clause.push_back(formule); 
                }
                           
            }
                Clause c = Clause(clause);

                res.addClause(c);

        }

    vector<int> variables = vector<int>(nb_variables);

        std:iota(variables.begin(), variables.end(), 1);
        res.setvariablesFormule(variables);

         return res;
    }
    else
    {
        cerr << "impossible d'ouvrir le fichier " + path << endl;
    }
}