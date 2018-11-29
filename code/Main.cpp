
#include <iostream>
#include <fstream>
#include <string>
#include "Parseur.h"

#include "Solveur.h"
using namespace std;


int main(int argc, char const *argv[])
{

   if (argc <2)
   {
      cout <<"Usage : " << argv[0] << " fichierFormule"<< endl;
      exit(1);


   }
   Parseur p = Parseur(argv[1]);

  Formule f =  p.parseFormule();

  Solveur s = Solveur();
 vector<int> res =  s.backtracking(f);

 for (int i = 0; i < res.size(); ++i)
 {
    cout << i << endl;
    
 }








}
