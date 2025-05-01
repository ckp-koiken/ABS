#include <bits/stdc++.h>
using namespace std;

// TODO: interpret
// TODO: fix vector
int N, T[101010], X[101010], Y[101010];

#define yes "Yes"
#define no "No"

string solve() {
  int pt = 0, px = 0, py = 0;
  for (int i = 0; i < N; i++) {
    int d = abs(px - X[i]) + abs(py - Y[i]);
    int dt = T[i] - pt;
    if (dt < d) {
      return no;
    }

    if ((dt - d) % 2 == 1) {
      return no;
    }

    pt = T[i];
    px = X[i];
    py = Y[i];
  }
  return yes;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> T[i] >> X[i] >> Y[i];
  }
  cout << solve() << endl;

  return 0;
}