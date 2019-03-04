#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main ()
{
    string fnev = "Read.txt";
    ifstream f(fnev.c_str());
    int elem;
    vector<int> vec;

    int index2 = 0, index = 0, max = 0;
    bool l = false, h = false;

    while (!f.eof())
    {
        f >> elem;
        vec.push_back(elem);
        index2++;
    }

    index = 0;
    for (int i = 1; i < index2; i++)
    {
        h = vec[i] < vec[i-1] && vec[i] < vec[i+1];
        if(h && !l)
        {
            l = true;
            index = i;
            max = vec[i];
        }
        else if (h && l)
        {
            if(vec[i] > max)
            {
                max = vec[i];
            }
        }
    }

    if(l)
    {
        cout << max;
    }
    else
    {   
        cout << "No max";
    }
}