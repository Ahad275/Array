#include<bits./stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {8,10,1,17,11};
    int large = INT16_MIN;
    int seclarge = INT16_MIN;
    for (int i = 0; i < 5; i++)
    {
         if (large < arr[i] )
         {
            seclarge = large;
            large = arr[i];
         }
         else if(seclarge < arr[i] && large != arr[i]){
            seclarge = arr[i];
         }
         
    }
    cout<<"The Second largest element is "<<seclarge;
    return 0;
}