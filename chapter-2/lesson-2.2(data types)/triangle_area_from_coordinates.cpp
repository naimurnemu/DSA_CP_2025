#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x1, x2, x3, y1, y2, y3;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x3 >> y3;

  double area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

  cout << fixed << setprecision(0) << area;

  return 0;
}