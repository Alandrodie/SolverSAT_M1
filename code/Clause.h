
#ifndef CLAUSE_H_
#define CLAUSE_H_

#include <vector>
#include <iostream>

using namespace std;

class Clause
{
public:
    Clause(vector<int> vect);
    virtual ~Clause();
    vector<int> getLitterals();



private:
    vector<int> clause;



};



#endif