#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, k;
  string s;

  cin >> n >> s;
  k = s.size();

  long long result = 1;
  if (n % k == 0) {
    result = 1;
    for (int i = n; i >= k; i -= k) {
      result *= i;
    }
  } else {
    result = 1;
    for (int i = n; i >= (n % k); i -= k) {
      result *= i;
    }
  }

  cout << result << endl;

  return 0;
}