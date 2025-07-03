#include <bits./stdc++.h>
using namespace std;
// To reverse an array
void rev(int arr[], int n, int j, int k)
{
    // int j = 0, k = n - 1;
    for (int i = 0; i < n / 2; i++)
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
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3; //Rotate by 3

    //Reverse till (k - 1) from starting
    rev(arr, k, 0, k-1);

    //Reverse from k to (n-1) 
    rev(arr, n-k, k , n-1);

    //Reverse the Complete array
    rev(arr, n, 0, n-1);

    //Print the final array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}