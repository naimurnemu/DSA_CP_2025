#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios:: sync_with_stdio(false);
  cin.tie(nullptr);
  
  int a, b, c;
  cin >> a >> b >> c;

  int s = (a + b + c) / 2;
  int A = sqrt(s * (s - a) * (s - b) * (s - c));

  cout << A ;
  return 0;
}