#include "v03.h"
void Gen(int& rekursija, int k, string failas0, int namudarbuskc, std::mt19937& mt)
{
    rekursija++;
    ofstream fr(failas0);
    std::uniform_int_distribution<int> dist(1, 10);
    fr << left << setw(21) << "Vardas" << setw(22) << "Pavarde";
    for (int i = 0; i < namudarbuskc; i++)
    {
        fr << "ND" << left << setw(18) << i + 1;
    }
    fr << "Egz." << endl;
    for (int i = 0; i < k; i++)
    {
        fr << "Vardas" << left << setw(15) << i + 1;
        fr << "Pavarde" << left << setw(15) << i + 1;
        fr << setw(20);
        for (int i = 0; i < namudarbuskc; i++) {
            fr << dist(mt) << setw(20);
        }
        fr << dist(mt) << endl;
    }
    if (rekursija == 2)
    {
        failas0 = "Antras.txt";
        Gen(rekursija, k * 10, failas0, namudarbuskc, mt);
    }
    else if (rekursija == 3)
    {
        failas0 = "Trecias.txt";
        Gen(rekursija, k * 10, failas0, namudarbuskc, mt);
    }
    else if (rekursija == 4)
    {
        failas0 = "Ketvirtas.txt";
        Gen(rekursija, k * 10, failas0, namudarbuskc, mt);
    }
    else if (rekursija == 5)
    {
        failas0 = "Penktas.txt";
        Gen(rekursija, k * 10, failas0, namudarbuskc, mt);
    }
}
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
bool Rik(const pazymiai& a, const pazymiai& b)
{
    return a.galutinis < b.galutinis;
}
void Skirstymas(int x, vector <pazymiai> M, vector <pazymiai>& N, vector <pazymiai>& B, int& N1, int& B1)
{
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < x; i++)
    {

        if (M[i].galutinis < 5)
        {

            N.push_back(M[i]);
            N1++;
        }
        else
        {
            B.push_back(M[i]);
            B1++;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    std::cout << x << " Rusiavimas i 2 grupes: " << diff.count() << endl;
}
void Spausdintuvas(string ats, string ats1, int N1, char MV, int x, vector <pazymiai>& N, int B1, vector <pazymiai>& B)
{
    ofstream Ats(ats);
    ofstream Ats1(ats1);
    sort(N.begin(), N.end(), Rik);
    Ats << "Pavarde";
    Ats << setw(14);
    Ats << "Vardas";
    Ats << setw(24);
    if (MV == 'M')
    {
        Ats << "Galutinis (Med.)" << endl;
        for (int i = 0; i < N1; i++)
        {
            Ats << N[i].pavarde;
            Ats << setw(14);
            Ats << N[i].vardas;
            Ats << setw(20);
            Ats << fixed << setprecision(2) << N[i].galutinis << endl;
        }
    }
    else if (MV == 'V')
    {
        Ats << "Galutinis(Vid.)" << endl;
        for (int i = 0; i < N1; i++)
        {
            Ats << N[i].pavarde;
            Ats << setw(14);
            Ats << N[i].vardas;
            Ats << setw(20);
            Ats << fixed << setprecision(2) << N[i].galutinis << endl;
        }
    }
    sort(B.begin(), B.end(), Rik);
    Ats1 << "Pavarde";
    Ats1 << setw(14);
    Ats1 << "Vardas";
    Ats1 << setw(24);

    if (MV == 'M')
    {
        Ats1 << "Galutinis (Med.)" << endl;
        for (int i = 0; i < B1; i++)
        {
            Ats1 << B[i].pavarde;
            Ats1 << setw(14);
            Ats1 << B[i].vardas;
            Ats1 << setw(20);
            Ats1 << fixed << setprecision(2) << B[i].galutinis << endl;
        }
    }
    else if (MV == 'V')
    {
        Ats1 << "Galutinis(Vid.)" << endl;
        for (int i = 0; i < B1; i++)
        {
            Ats1 << B[i].pavarde;
            Ats1 << setw(14);
            Ats1 << B[i].vardas;
            Ats1 << setw(20);
            Ats1 << fixed << setprecision(2) << B[i].galutinis << endl;
        }
    }

}
void Nuskaitymas(string Gavimas, string dummyline, string line, vector <pazymiai>& M, int& a, char MV, int& x, vector <pazymiai>& N, vector <pazymiai>& B, int& N1, int& B1, string ats, string ats1, int& rekursija2)
{
    auto start = std::chrono::high_resolution_clock::now();
    ifstream Imimas(Gavimas);
    getline(Imimas, dummyline);
    while (getline(Imimas, line))
    {
        stringstream ss(line);
        int numOfWords = countWords(line) - 3;
        int exam, suma = 0;
        double mediana = 0;

        M.push_back(pazymiai());
        ss >> M[a].pavarde >> M[a].vardas;
        int temp;
        for (int i = 0; i < numOfWords; i++)
        {
            ss >> temp;
            suma += temp;
            M[a].pazymys.push_back(temp); //
        }
        ss >> exam;
        if (MV == 'V')
            M[a].galutinis = 0.4 * (suma / numOfWords) + (0.6 * exam);
        else if (MV == 'M')
        {
            sort(M[a].pazymys.begin(), M[a].pazymys.end());
            if (numOfWords % 2 != 0)
            {
                int k = 0, kint;
                k = numOfWords / 2;
                kint = numOfWords;
                kint -= k;
                mediana = M[a].pazymys[kint - 1];
            }
            else
            {
                int k = 0;
                k = numOfWords / 2;
                mediana = (M[a].pazymys[k - 1] + M[a].pazymys[k]) / 2;
            }
            M[a].galutinis = (0.4 * mediana) + (0.6 * exam);
        }
        a++;
        x = a;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    std::cout << a << " Duomenu nuskaitymas: " << diff.count() << endl;
    Skirstymas(x, M, N, B, N1, B1);
    Spausdintuvas(ats, ats1, N1, MV, x, N, B1, B);
    N.clear();
    B.clear();
    a = 0;
    N1 = 0; B1 = 0;
    rekursija2++;
    if (rekursija2 == 2)
    {
        ats = "Atsakymai2.1.txt";
        ats1 = "Atsakymai2.2.txt";
        Gavimas = "Antras.txt";
        Nuskaitymas(Gavimas, dummyline, line, M, a, MV, x, N, B, N1, B1, ats, ats1, rekursija2);
    }
    if (rekursija2 == 3)
    {
        ats = "Atsakymai3.1.txt";
        ats1 = "Atsakymai3.2.txt";
        Gavimas = "Trecias.txt";
        Nuskaitymas(Gavimas, dummyline, line, M, a, MV, x, N, B, N1, B1, ats, ats1, rekursija2);
    }
    if (rekursija2 == 4)
    {
        ats = "Atsakymai4.1.txt";
        ats1 = "Atsakymai4.2.txt";
        Gavimas = "Ketvirtas.txt";
        Nuskaitymas(Gavimas, dummyline, line, M, a, MV, x, N, B, N1, B1, ats, ats1, rekursija2);
    }
    if (rekursija2 == 5)
    {
        ats = "Atsakymai5.1.txt";
        ats1 = "Atsakymai5.2.txt";
        Gavimas = "Penktas.txt";
        Nuskaitymas(Gavimas, dummyline, line, M, a, MV, x, N, B, N1, B1, ats, ats1, rekursija2);
    }

}
void Rikiuoti(vector <pazymiai> M, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (M[i].vardas > M[j].vardas)
                swap(M[i], M[j]);
}
void Rikiuoti1(vector <pazymiai> M, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (M[i].pavarde > M[j].pavarde)
                swap(M[i], M[j]);
}
