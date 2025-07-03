#include<bits./stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {8,10,5,7,9};
    int largest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(largest <= arr[i]){
            largest = arr[i];
        }
    }
    cout<<"The largest element is "<<largest;
    
    return 0;
}