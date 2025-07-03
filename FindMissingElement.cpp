#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "The Missing Number is " << i + 1;
            break;
        }
    }
    // we can also solve this question using sum of N natural number
    return 0;
}