# ***Antroji užduotis*** 
# ***v0.1*** 
Programa geba suskaičiuoti galutini rezultatą pagal formulę "Galutinis = 0.4*vidurkis(arba mediana pasirinktinai)+0.6*egzamino rezultatas.
# ***v0.1 versija:***
1) Programa prašp įvesti mokinio vardą ir pavardę
2) Naudotojui leidžiama pasirinkti ar namų darbų rezultatus sugeneruoti atsitiktinai ar naudotojas nori juos įvesti pats
3) Naudotojui leidžiama pasirinkti ar egzamino rezultatą sugeneruoti ar įvesti pačiam
4) Naudotojui leidžiama pasirinkti ar galutini balą skaičiuoti su mediana ar vidurkiu
5) Naudotojo paklausiama ar yra daugiau studentų.
# ***v0.2 versija:***
1) Versijoje programa leidžia pasirinkti ar norima duomenis nuskaityti iš failo
2) Taip pat programa sugeba rikiuoti studentų duomenys pagal pasirinktą kriterijų.
# ***v0.3 versija:***
1) Pridėta try/catch funkcija, kuri patikrina, ar failas, kurį nori nuskaityti, egzistuoja
2) Programos funkcijų aprašymui sukurtas header ir cpp failas.
Programą geriausia naudoti per Codeblocks atidarant cbp failą.
# ***v0.4 versija:***
1) Sukurta nauja funkcija leidžianti vartotojuj atlikti testavimą, spartos analizę (Sukuriant 1000, 10000, 100000, 1000000, 10000000 dydžio failus)
2) Nuo šios versijos studentai yra padalinami į 2 grupes, tų kurių galutinis balas < 5 ("Kietakai") ir kurių galutinis balas < 5 (Vargšiukai)
# ***v0.5 versija:***
# Pirmoji strategija:
***Bendro studentai konteinerio (vector, list ir deque tipų) skaidymas (rūšiavimas) į du naujus to paties tipo konteinerius: "vargšiukų" ir "kietiakų".***
Namu darbu pasirinktas kiekis: 5

# Vector

|               |     1000      |     10000     |     100000    |    1000000    |    10000000   |
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
|   Skaitymas   |   0.0081365   |   0.0697041   |    0.585953   |    5.6079     |    56.0802    |
|  Rušiavimas   |   0.0001577   |   0.0020361   |    0.0168702  |    0.179203   |    1.90676    |

# Deque

|               |     1000      |     10000     |     100000    |    1000000    |    10000000   |
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
|   Skaitymas   |   0.0057067   |   0.0638156   |    0.580284   |    5.59991    |    57.4952    |
|  Rušiavimas   |   0.0003898   |   0.0034929   |    0.0386168  |    0.364254   |    3.78832    |

# List
|               |     1000      |     10000     |     100000    |    1000000    |    10000000   |
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
|   Skaitymas   |   0.0056877   |   0.0539884   |    0.548987   |    5.67447    |    55.231     |
|  Rušiavimas   |   0.0001273   |   0.0013562   |    0.0154812  |    0.155869   |    1.58987    |

Testavimas kiekvienam konteineriui atliktas su tais pačiais 5 skirtingo dydžio failais.

Rezultate matome, kad naudojant std::deque programos veikimo laikas pailgėja, tačiau naudojant std::list programos sparta padidėja ir veikimo laikas sumažėja. 

Nors naudojant std::list programos sparta padidėja, bet programos vygdymo metu reikalaujama daugiau RAM atminties.
 
 # ***1.0 versija:***
 # 2 strategija
 ***Bendro studentų konteinerio (vector, list ir deque) skaidymas (rūšiavimas) panaudojant tik vieną naują konteinerį: "vargšiukai".***
 # Vector

# Deque

# List

|               |     1000      |     10000     |     100000    |    1000000    |    10000000   |
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
|   Skaitymas   |   0.0057614   |   0.0561405   |    0.589947   |    5.56436    |    56.609     |
|  Rušiavimas   |   0.0001539   |   0.0017766   |    0.0165147  |    0.194841   |    2.01919    |

