#include "Clause.h"


    vector<int> Clause::getLitterals()
    {
        return this->clause;
    }


    Clause::Clause(vector<int> vect)
    {
        clause=vect;
        
    }

    Clause::~Clause()
    {
    }
