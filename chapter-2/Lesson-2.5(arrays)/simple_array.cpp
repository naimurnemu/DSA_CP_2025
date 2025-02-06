#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios:: sync_with_stdio(false);
  cin.tie(nullptr);
  
  int count = 0;
  cin >> count;
  int arr[count];

  for (int i = 0; i < count; i++)
  {
    arr[count - 1] ++;
  }
  
  int maximum_score = 0;
  for (int i = 0; i < count; i++)
  {
    max(maximum_score, arr[i]);
  }

  cout << "Max Score: " << maximum_score;
  
  return 0;
}