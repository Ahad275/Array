#include<bits./stdc++.h>
using namespace std;
//To reverse an array 
void rev(int arr[], int n){
    int j = 0 , k = n-1;
    for (int i = 0; i < n /2; i++)
    {
        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
        j++;
        k--;
    }
    
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    // First Reverse the complete array 
    rev(arr,n);
    // Second Reverse the array except the last element
    rev(arr,n- 1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}