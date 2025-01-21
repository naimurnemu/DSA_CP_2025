#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, y;
  cin >> x >> y;
  if (x > 0 && y > 0)
    cout << "Top Right" << endl;
  else if (x < 0 && y > 0)
    cout << "Top Left" << endl;
  else if (x < 0 && y < 0)
    cout << "Bottom Left" << endl;
  else
    cout << "Bottom Right" << endl;

  return 0;
}