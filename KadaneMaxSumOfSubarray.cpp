#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;
    int maxsum = INT16_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum > maxsum)
        {
            maxsum = sum;
        }
         if (sum < 0) {
            sum = 0; 
        }
    }
    cout << maxsum;

    // Brute Force Approach
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum = sum + arr[k];
    //         }
    //         maxsum = max(sum ,maxsum);
    //     }

    // }
    // cout<<maxsum;

    return 0;
}