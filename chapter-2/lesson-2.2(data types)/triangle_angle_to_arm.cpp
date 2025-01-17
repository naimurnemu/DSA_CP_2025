#include <bits/stdc++.h>
using namespace std;

float get_angle(int a, int b, int c)
{
  if (2.0 * b * c == 0)
  {
    return 0;
  }

  float cosineValue = (pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2.0 * b * c);

  cosineValue = max(-1.0f, min(1.0f, cosineValue));

  float angleInRadians = acos(cosineValue);
  float angleInDegrees = angleInRadians * (180.0 / M_PI);
  return angleInDegrees;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  cin >> a >> b >> c;

  float A = get_angle(a, b, c);
  float B = get_angle(b, c, a);
  float C = get_angle(c, a, b);

  cout << fixed << setprecision(2);
  cout << A << " " << B << " " << C;

  return 0;
}
