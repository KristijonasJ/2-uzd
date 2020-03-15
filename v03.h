#ifndef V03_H_INCLUDED
#define V03_H_INCLUDED
#include <bits/stdc++.h>
#include<limits>
#include <deque>
#include <random>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::deque;
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
struct pazymiai
{
    string vardas, pavarde;
    deque <int> pazymys={};
    double galutinis;
    pazymiai()
    {
        galutinis =0;
    }
};
void Gen(int & rekursija, int n, int k, string failas0, int namudarbuskc, std::mt19937 &mt);
int countWords(string str);
bool BBD(const pazymiai& a, const pazymiai & b);
void Skirstymas(int x, deque <pazymiai> M, deque <pazymiai> & N, deque <pazymiai> & B, int  &N1, int & B1);
void Spausdintuvas(string ats, string ats1, int N1, char MV, int x, deque <pazymiai> & N, int B1, deque <pazymiai> & B);
void Nuskaitymas(string Gavimas,string dummyline, string line,deque <pazymiai> & M, int &a, char MV, int & x,deque <pazymiai> & N, deque <pazymiai> & B, int &N1, int & B1, string ats, string ats1, int & rekursija2);
void Rikiuoti(deque <pazymiai> M, int n);
void Rikiuoti1(deque <pazymiai> M, int n);
#endif // V03_H_INCLUDED
