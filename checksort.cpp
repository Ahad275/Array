#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    bool issorted = true;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            issorted = false;
            break;
        }
    }
    if (issorted)
        cout << "True";
    else
        cout << "False";
    return 0;
}