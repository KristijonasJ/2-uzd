#ifndef V03_H_INCLUDED
#define V03_H_INCLUDED
#include <bits/stdc++.h>
#include<limits>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::swap;
using std::numeric_limits;
using std::fixed;
using std::setprecision;
using std::setw;
using std::ifstream;
using std::stringstream;
using std::ofstream;
struct pazymiai
{
    string vardas, pavarde;
    vector <int> pazymys={};
    double galutinis;
    pazymiai()
    {
        galutinis =0;
    }
};
int countWords(string str);
void Rikiuoti(vector <pazymiai> M, int n);
void Rikiuoti1(vector <pazymiai> M, int n);
#endif // V03_H_INCLUDED
