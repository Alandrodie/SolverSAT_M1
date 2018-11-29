#include "Formule.h"

Formule::Formule(/* args */)
{
    formule = vector<Clause>();
    variablesFormule = vector<int>();
    
}

Formule::~Formule()
{
}
vector<int> Formule::getVariables()
{
    return variablesFormule;

}

void Formule::addClause(Clause c)
{
    this->formule.push_back(c);
}

bool Formule::containsEmptyClause()
{
    for (Clause c : this->formule)
    {
        if (c.getLitterals().size() == 0)
            return true;

    }
    return false;

}

vector<Clause> Formule::getClauses()
{
    return formule;
}


void Formule::setvariablesFormule(vector<int> variables)
{
    this->variablesFormule = variables;

}
