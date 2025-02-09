#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
  if (n == 0 || n == 1)
    return false;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
      return false;
  }
  
  return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int times;
  cin >> times;

  int maximum_index = 0;
  int arr_index[times];
  for (int i = 0; i < times; i++)
  {
    int n;
    cin >> n;
    maximum_index = max(maximum_index, n);
    arr_index[i] = n;
  }

  int arr_prime[maximum_index];

  int num = 2;
  int index = 0;
  while (index < (maximum_index + 1))
  {
    if (is_prime(num))
    {
      arr_prime[index] = num;
      index++;
      num++;
    }
    else
    {
      num++;
    }
  }

  for (int i = 0; i < times; i++)
  {
    cout << arr_prime[arr_index[i]-1] << endl;
  }

  return 0;
}