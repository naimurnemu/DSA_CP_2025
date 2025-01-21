#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int result = 0;

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
      result -= i;
    else
      result += i;
  }

  cout << result << "\n";

  return 0;
}