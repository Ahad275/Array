#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {10, 22, 12, 3, 0, 6};
    int n = 6;
    vector<int> v;
    int maxel = arr[n - 1];
    v.push_back(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxel)
        {
            v.push_back(arr[i]);
            maxel = arr[i];
        }
    }

    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    // Brute Force Approach
    // for (int i = 0; i < n - 1; i++)
    // {
    //     bool flag = 1;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] < arr[j])
    //         {
    //             flag = 0;
    //             break;
    //         }
    //         else
    //         {
    //             flag = 1;
    //         }
    //     }
    //     if (flag == 1)
    //     {
    //         v.push_back(arr[i]);
    //     }
    // }
    // v.push_back(arr[n - 1]);
    // int size = v.size();
    // for (int i = 0; i < size; i++)
    // {
    //     cout << v[i] << " ";
    // }

    return 0;
}