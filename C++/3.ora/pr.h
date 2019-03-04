#ifndef PR_H
#define PR_H
#include <string>

using namespace std;

struct Elem
{
            string nev;
            int pont;

            Elem();
            Elem(string n, int p) : nev(n), pont(p) {};
            friend bool operator > (const Elem &e1, const Elem &e2)
            {
                return e1.pont > e2.pont;
            };
            friend bool operator << (ostream &os, const Elem &e)
            {
                os << "csapatnev: " << e.nev << ", pontszam: " << e.pont << endl;
            };
};

class Pr
{
    private:
        vector<Elem> vec;
        const int maxmeret;
    public:
        enum PrError {Tele,Ures};
        Pr() : maxmeret(10) {};
        Pr(int m) : maxmeret(m) {};
        void PrInsert(Elem e);
        void PrMax();
};

#endif