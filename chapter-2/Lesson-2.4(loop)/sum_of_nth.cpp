#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int sum = 0;

  for (int i = 1; i <= n; i++)
  {
    int presum = 0;
    for (int j = 0; j < i; j++)
    {
      presum += (i + j);
    }
    sum += presum;
  }

  cout << sum << "\n";

  return 0;
}