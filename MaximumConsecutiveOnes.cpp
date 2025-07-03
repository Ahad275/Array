#include<bits./stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {1, 1, 0, 1, 1, 1};
    int curr = 0;
    int last = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 1)
        {
            curr++;
        }
        else if (arr[i] == 0)
        {
            last = curr;
            curr = 0;
        }
    }
    if (curr > last)
    {
        cout<<curr;
    }
    else{
        cout<<last;
    }
    
    
    return 0;
}