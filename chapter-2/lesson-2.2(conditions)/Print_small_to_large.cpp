#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  cin >> a >> b >> c;

  if (a > b && a > c)
    if (b > c)
      cout << a << " " << b << " " << c << endl;
    else
      cout << a << " " << c << " " << b << endl;
  else if (b > a && b > c)
    if (a > c)
      cout << b << " " << a << " " << c << endl;
    else
      cout << b << " " << c << " " << a << endl;
  else 
    if (a > b)
      cout << c << " " << a << " " << b << endl;
    else
      cout << c << " " << b << " " << a << endl;

  return 0;
}