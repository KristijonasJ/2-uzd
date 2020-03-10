#ifndef V03_H_INCLUDED
#define V03_H_INCLUDED
#include <bits/stdc++.h>
#include<limits>
#include <vector>
#include <random>
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
using std::left;
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
void Gen(int & rekursija, int n, int k, string failas0, int namudarbuskc, std::mt19937 &mt, vector <double> &laikas);
int countWords(string str);
bool BBD(const pazymiai& a, const pazymiai & b);
void Skirstymas(int x, vector <pazymiai> M, vector <pazymiai> & N, vector <pazymiai> & B, int  &N1, int & B1);
void Spausdintuvas(string ats, string ats1, int N1, char MV, int x, vector <pazymiai> & N, int B1, vector <pazymiai> & B);
void Nuskaitymas(string Gavimas,string dummyline, string line,vector <pazymiai> & M, int &a, char MV, int & x,vector <pazymiai> & N, vector <pazymiai> & B, int &N1, int & B1, string ats, string ats1, int & rekursija2, vector <double> &laikas);
void Rikiuoti(vector <pazymiai> M, int n);
void Rikiuoti1(vector <pazymiai> M, int n);
#endif // V03_H_INCLUDED
