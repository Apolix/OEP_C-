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
	
    int n = 0;
	
	while (!f.eof())
    {
        f >> elem;
        vec.push_back(elem);
        n++;
    }
	
	int db[n];
    int count = 0;
    int max = 1;
    int index = 1;
    
    for (int i = 1; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {     
            if (vec[j] == vec[i])
            {
                count++;
            }
        }
        db[i] = count;
        if (db[i] > max)
		{
            max = db[i];
            index = i;
        }  
        count = 0; 
    }
    
	if(n > 0)
	{
		cout << vec[index];
	}
	else
	{
		cout << "No data";
	}
}