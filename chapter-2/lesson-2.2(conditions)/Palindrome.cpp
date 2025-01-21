#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string str = to_string(i);
    string str2 = str;
    reverse(str.begin(), str.end());
    if (str == str2)
      cout << i << endl;
  }

  return 0;
}