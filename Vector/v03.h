#ifndef V03_H_INCLUDED
#define V03_H_INCLUDED
#include <iostream>
#include <iomanip>
#include <list>
#include <algorithm>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <chrono>
#include <vector>
#include <random>
#include <chrono>
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
using std::vector;
struct pazymiai
{
    string vardas, pavarde;
    vector <int> pazymys = {};
    double galutinis;
    pazymiai()
    {
        galutinis = 0;
    }
};
void Gen(int& rekursija, int k, string failas0, int namudarbuskc, std::mt19937& mt);
int countWords(string str);
bool Rik(const pazymiai& a, const pazymiai& b);
bool Testas(const pazymiai& a, const pazymiai& b);
void Skirstymas(int x, vector <pazymiai>& M, vector <pazymiai>& N, int& N1, int& B1);
void Spausdintuvas(string ats, string ats1, int N1, char MV, int x, vector <pazymiai>& N, int B1, vector <pazymiai>& M);
void Nuskaitymas(string Gavimas, string dummyline, string line, vector <pazymiai>& M, int& a, char MV, int& x, vector <pazymiai>& N, int& N1, int& B1, string ats, string ats1, int& rekursija2);
void Rikiuoti(vector <pazymiai> M, int n);
void Rikiuoti1(vector <pazymiai> M, int n);
#endif // V03_H_INCLUDED
