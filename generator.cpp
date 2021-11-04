#pragma once
#include <bits/stdc++.h>
using namespace std;

vector<unsigned int> generate_vector(unsigned int n)
{
    vector<unsigned int> vect(n);
    vect.clear();
    srand(time(NULL));
    for (unsigned int i = 0; i < n; i++)
    {
        unsigned int a;
        a = (rand() % 10001) + 1;
        vect.push_back(a);
    }
    return vect;
}

void print_vector(vector< int> vect)
{
    for ( int x : vect)
    {
        cout << x << "| ";
    }
    cout << endl;
}
