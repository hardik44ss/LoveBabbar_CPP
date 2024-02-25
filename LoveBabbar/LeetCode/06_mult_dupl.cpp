#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void multdup(vector<int> &v)
{
    vector<int> res;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v.at(i) == v.at(j))
            {
                res.push_back(v.at(i));
            }
        }
    }
    sort(res.begin(), res.end());
    for (int n : res)
    {
        cout << n << " ";
    }
}


int main()
{
    vector<int> v = {1,2,3,4,3,2,1};
    multdup(v);
   
    // display(v);

    return 0;
}