#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const* argv[])
{
  int N,A,B,C;
  vector<int> m(3);
  cin >> N >> m[0] >> m[1] >> m[2];
  sort(m.begin(), m.end(),[](int a, int b) {
      return a > b;
      });

  int cnt =0;
  while (N > 0) {
    N -= m[cnt%3];
    cnt++;
  }
  cout << cnt << endl;


  
  return 0;
}
