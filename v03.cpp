#include "v03.h"
int countWords(string str)
{
    // breaking input into word using string stream
    stringstream s(str); // Used for breaking words
    string word; // to store individual words

    int count = 0;
    while (s >> word)
        count++;
    return count;
}
void Rikiuoti(vector <pazymiai> M, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
           if(M[i].vardas>M[j].vardas)
              swap(M[i],M[j]);
}
void Rikiuoti1(vector <pazymiai> M, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
           if(M[i].pavarde>M[j].pavarde)
              swap(M[i],M[j]);
}
