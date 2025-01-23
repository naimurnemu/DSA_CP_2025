#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios:: sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  if(n == 0) 
  {
    cout << 1 << "\n";
    return 0;
  }

  int fact = 1;
  for(int i = 1; i <= n; i++)
  {
    fact *= i;
  }

  cout << fact << "\n";
  
  return 0;
}