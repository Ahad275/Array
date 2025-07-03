#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[8] = {1,0, 2, 3, 0, 4, 0, 1};
    int j = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
        
    }
    
    // Printing the Result
    for (int l = 0; l < 8; l++)
    {
        cout<<arr[l]<<" ";
    }
    

























    // vector<int> v;
    // int countzero = 0;
    // //Push all element in an vector v other than 0.
    // for (int i = 0; i < 8; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         v.push_back(arr[i]);
    //     }
    //     else
    //     {
    //         countzero++;
    //     }
    // }
    // // Push the number of zeros at the end in the vector v
    // for (int i = 0; i < countzero; i++)
    // {
    //     v.push_back(0);
    // }

    // //For Final Output
    // for (int i = 0; i < 8; i++)
    // {
    //     cout<<v[i]<<" ";

    // }
    

    return 0;
}