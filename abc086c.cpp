#include <bits/stdc++.h>
using namespace std;

// TODO: interpret
int N;
vector<int> T(101010), X(101010), Y(101010);

#define yes "Yes"
#define no "No"

string solve() {
  int pt = 0, px = 0, py = 0;
  for (int i = 0; i < N; i++) {
    int d = abs(px - X.at(i)) + abs(py - Y.at(i));
    int dt = T.at(i) - pt;
    if (dt < d) {
      return no;
    }

    if ((dt - d) % 2 == 1) {
      return no;
    }

    pt = T.at(i);
    px = X.at(i);
    py = Y.at(i);
  }
  return yes;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> T.at(i) >> X.at(i) >> Y.at(i);
  }
  cout << solve() << endl;

  return 0;
}