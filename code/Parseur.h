


#ifndef PARSEUR_H_
#define PARSEUR_H_

#include "Formule.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>


using namespace std;

class Parseur
{
private :
    string path;

public:
    Parseur(string path);
    ~Parseur();
    Formule parseFormule();
    



};

#endif