#include <iostream>

using namespace std;

class Pytanie
{
    public:

    string tresc;
    string a,b,c,d;
    string poprawna;
    string odpowiedz;
    int nr_pytania;
    int punkt;

    void wczytaj();
    void zadaj();
    void sprawdz();
};
