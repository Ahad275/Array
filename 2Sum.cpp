#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2, 6, 5, 8, 11};
    int n = 5;
    int target = 13;

    // Brute Force Approach
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == target)
    //         {
    //             cout << "The two element whose sum is equal to target are: " << arr[i] << " and " << arr[j] << endl;
    //         }
            
    //     }
    // }

    // optimal Approach
   
    int left  = 0;
    int right = n -1;
    sort(arr,arr+n);
    while (left < right)
    {
        if (arr[left] + arr[right] == target)
        {
            cout<<arr[left]<<" and "<<arr[right]<<endl;
            left++;
            right--;
            
        }
        else if (arr[left] + arr[right] < target)
        {
            left++;
        }
        else{
            right--;
        }
        

        
    }
    
        
    
    
    

    return 0;
}