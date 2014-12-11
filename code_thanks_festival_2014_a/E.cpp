#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
  int R,C,M,N;
  cin >> R >> C >> M >> N;
  vector<int> r1(N);
  vector<int> r2(N);
  vector<int> c1(N);
  vector<int> c2(N);
  for (int i = 0; i < N; ++i) {
    cin >> r1[i] >> r2[i] >> c1[i] >> c2[i];
  }

  vector< vector<int>> A(R,vector<int>(C));
  for(int i = 0; i < R; ++i) {
    for (int j = 0; j < C; ++j) {
      A[i][j] = 0;
    }
  }

  for (int i = 0; i < N; ++i) {
    for (int y = r1[i]-1; y < r2[i]; ++y) {
      for (int x = c1[i]-1; x < c2[i]; ++x) {
        A[y][x] = (A[y][x]+1)%4;
      }
    }
  }

  vector< vector<int>> B(R,vector<int>(C));
  for(int y = 0; y < R; ++y) {
    for (int x = 0; x < C; ++x) {
      B[y][x] = A[y][x];
    }
  }

  for (int i = 0; i < N; ++i) {
    for (int y = r1[i]-1; y < r2[i]; ++y) {
      for (int x = c1[i]-1; x < c2[i]; ++x) {
        A[y][x] = (A[y][x]+3)%4;
      }
    }

    int cnt = 0;
    for(int y = 0; y < R; ++y) {
      for (int x = 0; x < C; ++x) {
        if (A[y][x] == 0) cnt++;
        A[y][x] = B[y][x];
      }
    } 
    if (cnt == M) cout << i+1 << endl;
  }

  return 0;
}

