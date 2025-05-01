#include <bits/stdc++.h>
using namespace std;

// TODO: interpret
int N;
vector<int> T(101010), X(101010), Y(101010);

#define yes "Yes"
#define no "No"

// (px, py)から(X.at(i), Y.at(i))へ時間T.at(i)で遷移可能かを判定する
string solve() {
  int pt = 0, px = 0, py = 0;
  for (int i = 0; i < N; i++) {
    // 2つの座標間を距離dで表す
    int d = abs(px - X.at(i)) + abs(py - Y.at(i));
    // 使える時間をdtで表す
    int dt = T.at(i) - pt;

    // 使える時間の方が距離よりも短ければ実現不可能
    // 最短距離で移動しても間に合わない
    if (dt < d) {
      return no;
    }

    // TODO: dt-dが偶数であるなら移動できる
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