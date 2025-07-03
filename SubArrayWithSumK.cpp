#include <bits./stdc++.h>
using namespace std;
int main()
{
    int arr[3] = {-1, 1, 1};
    int n = 3, k = 1;
    int sum = arr[0];
    int len = 0;
    int left = 0, right = 0;
    while (right < n)
    {
        while (left <= right && sum > k  )
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            len = max(len , (right - left +1));
        }
        

        right++;
        if (right < n)
        {
            sum = sum + arr[right];
        }
    }
    cout<<len;

    return 0;
}