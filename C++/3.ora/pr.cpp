#include <iostream>
#include <fstream>
#include <vector>
#include "pr.h"

int main ()
{
    string name = "Read.txt";
	ifstream file(name.c_str());

    Pr ps = Pr();

    string n; int p;
    while (!file.eof())
    {
        file >> n;
        file >> p;
        Elem e = Elem(n,p);
        try
        {
            ps.PrInsert(e);
        }
        catch (Pr::PrError er)
        {
            if (er == Pr::Tele)
            {
                cout << "Stackoverflow";
            }   
        }
    }
    
    ps.PrMax();
    return 0;
}

void Pr::PrInsert (Elem e)
{
    if (vec.size() < maxmeret)
    {
        vec.push_back(e);
    }
    else 
    {
        throw Tele;
    }
}

void Pr::PrMax()
{
    Elem max = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] > max)
        {
            max = vec[i];
        }
    }
    cout << max;
}