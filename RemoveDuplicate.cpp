#include<bits./stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int arr[11] = {1,1,1,2,2,3,3,3,3,4,4};
    vector<int> v;
    int temp = arr[0];
    v.push_back(arr[0]);
    for (int i = 1; i < 11; i++)
    {   
        if(arr[i] != temp){
            v.push_back(arr[i]);
            temp = arr[i];
        }
    }


    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}