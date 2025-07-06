#include<bits./stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,3,2};
    int n = 3;
    next_permutation(arr,arr+n);
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}