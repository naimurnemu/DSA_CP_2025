#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x1, x2, y1, y2;
  cin >> x1 >> y1;
  cin >> x2 >> y2;

  int a = pow(x2 - x1, 2);
  int b = pow(y2 - y1, 2);
  cout << sqrt(a + b);
  
  return 0;
}