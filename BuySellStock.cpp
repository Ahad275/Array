#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {7,1,5,3,6,4};
    int n = 6;
    int minval = arr[0]; 
    int maxprofit = 0;
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - minval > maxprofit)
        {
            maxprofit = arr[i] - minval;
        }
        if (arr[i] < minval)
        {
            minval = arr[i];
        }
        
        
    }
    
    cout << maxprofit;

    // Brute Force approach
    // int maxdiff = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] - arr[i] > maxdiff)
    //         {
    //             maxdiff = arr[j] - arr[i];
    //         }
    //     }
    // }
    // cout << maxdiff;

    return 0;
}