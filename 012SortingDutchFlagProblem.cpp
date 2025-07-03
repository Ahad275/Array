#include<bits./stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {2,0,2,1,1,0};
    int low = 0;
    int high = 5;
    int mid = 0;
    while(mid <= high)
    {
        if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }  
    }
    for (int  i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


























    //Brute Force Approach
    // int zero = 0, one = 0, two = 0;
    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         zero++;
    //     }
    //     else if (arr[i] == 1)
    //     {
    //         one++;
    //     }
    //     else{
    //         two++;
    //     }
    // }
    // for (int i = 0; i < zero; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int i = zero; i < one +zero; i++)
    // {
    //     arr[i] = 1;
    // }
    // for (int i = zero + one; i < 6; i++)
    // {
    //     arr[i] = 2;
    // }
    
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    
    return 0;
}