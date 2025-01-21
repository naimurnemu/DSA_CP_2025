#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  long long int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    int multi = pow(i, i);
    sum += multi;
  }

  cout << sum << "\n";

  return 0;
}