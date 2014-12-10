#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
  int N, Q;
  cin >> N >> Q;
  vector<int> sum(Q);
  for (int i = 0; i < Q; ++i) {
    int a,b,s,t;
    cin >> a >> b >> s >> t;
    sum[i] = 0;
    if ((a > t) || (b < s)) {
      sum[i] = (t-s)*100;
    }else{
      if (a-s > 0) sum[i] += (a-s)*100;
      if (t-b > 0) sum[i] += (t-b)*100;
    }
  }
  for (int i = 0; i < Q; ++i) cout << sum[i] << endl;

  return 0;
}
