#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {2, 3, 4, 4, 5};
    vector<int> v;
    v.push_back(arr1[0]);
    if (arr2[0] != v.back())
    {
        v.push_back(arr2[0]);
    }
    for (int i = 1; i < 5; i++)
    {
        
        if (arr1[i] != v.back())
        {
            v.push_back(arr1[i]);
        }
        else if (arr2[i] != v.back())
        {
            v.push_back(arr2[i]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}