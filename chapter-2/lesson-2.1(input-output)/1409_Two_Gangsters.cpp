#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios:: sync_with_stdio(false);
  cin.tie(nullptr);
  

  int harry_can, larry_can;
  cin >> harry_can >> larry_can;
  
  int total_can = harry_can + larry_can - 1;

  cout << total_can - harry_can << " " << total_can - larry_can;
  
  return 0;
}