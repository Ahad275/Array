#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[3] = {2, 2, 1};
    sort(arr, arr + 3);
    
    // 1   1   2   2   4
    int k = 0;
    for (int i = k; i < 3; i = i+2)
    {
        if (arr[i] == arr[i + 1])
        {
            continue;
        }
        else if (arr[i] != arr[i + 1])
        {
            cout << arr[i];
            break;
        }
    }

    return 0;
}