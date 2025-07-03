#include<bits./stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {4,4,2,4,3,4,4,3,2,4};
    int n = 10;
    int cnt = 0;
    int el = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            cnt++;
        }
        else if (arr[i] != el)
        {
            el = arr[i];
            cnt--;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (el = arr[i])
        {
            cnt++;
        }
        
    }
    if (cnt >= n/2)
    {
        cout<<el;
    }
    
    

    return 0;
}