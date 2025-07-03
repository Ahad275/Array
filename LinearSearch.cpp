#include<bits./stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2,4,5,1,2};
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] == n){
            cout<<"The Element is at index: "<<i;
            break;
        }
    }
    
    return 0;
}