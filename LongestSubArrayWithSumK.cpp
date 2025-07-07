#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-1, 1, 1};
    int n = 3;
    int k = 1;
    map<int, int> PreSumMap;
    int sum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        int rem = sum - k;
        if (PreSumMap.find(rem) != PreSumMap.end())
        {
            int len = i - PreSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if (PreSumMap.find(sum) == PreSumMap.end())
        {
            PreSumMap[sum] = i;
        }
    }

    cout << "The Maximum length is " << maxLen << endl;
    return 0;
}
