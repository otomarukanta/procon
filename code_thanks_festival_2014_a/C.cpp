#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
  int N,M;
  cin >> N >> M;
  vector<int>P(N);
  vector<int>S(M);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }
  for (int i = 0; i < M; i++) {
    cin >> S[i];
  }
  int sum =0;
  for( int i = 0; i < M; i++) {
    sum += P[S[i]-1];
  }
  cout << sum << endl;
  return 0;
}
