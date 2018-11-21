
#ifndef SOLVEUR_H_
#define SOLVEUR_H_

#include "Formule.h"



class Solveur
{
private:
    Formule formule;
    vector<int> solution;

public:
    Solveur();
    ~Solveur();
    Formule simplify(Formule f, int l);
    vector<int> backtracking(Formule f);

};

#endif