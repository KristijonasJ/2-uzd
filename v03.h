#ifndef V03_H_INCLUDED
#define V03_H_INCLUDED
#include <bits/stdc++.h>
#include<limits>
#include <list>
#include <random>
#include<list>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::list;
using std::swap;
using std::numeric_limits;
using std::fixed;
using std::setprecision;
using std::setw;
using std::ifstream;
using std::stringstream;
using std::ofstream;
using std::left;
using std::vector;
using std::list;
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
void Gen(int & rekursija, int n, int k, string failas0, int namudarbuskc, std::mt19937 &mt);
int countWords(string str);
bool Rik(const pazymiai& a, const pazymiai & b);
void Skirstymas(int x, list <pazymiai> M, list <pazymiai> & N, list <pazymiai> & B, int  &N1, int & B1);
void Spausdintuvas(string ats, string ats1, int N1, char MV, int x, list <pazymiai> & N, int B1, list <pazymiai> & B);
void Nuskaitymas(string Gavimas,string dummyline, string line,list <pazymiai> & M, int &a, char MV, int & x,list <pazymiai> & N, list <pazymiai> & B, int &N1, int & B1, string ats, string ats1, int & rekursija2);
bool Vardas(const pazymiai& a, const pazymiai & b);
bool Pavarde(const pazymiai& a, const pazymiai & b);
#endif // V03_H_INCLUDED
