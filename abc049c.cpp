#include <bits/stdc++.h>
using namespace std;

// TODO: fix vector
// vector<string> divide(4) = {"dream", "dreamer", "erase", "eraser"};

// Sを構成するワード
string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string S;
  cin >> S;

  // 全ての文字列を左右反転する（後ろから解く）
  // dreamとdreamerなど順番通りに文字列を見ると被りがある
  // 左右を逆にすれば被らない
  // S自体も反転させて、反転したワードでSを構成できるかを確認する

  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++) {
    reverse(divide[i].begin(), divide[i].end());
  }

  // 端から順に見ていく
  // 4つのワードで切ることができるのかを判定(can)
  bool can = true;
  for (int i = 0; i < S.size();) {  // Sの大きさ分だけループ
    bool can2 = false;  // ワードに該当するかを判定(can2)
    for (int j = 0; j < 4; j++) {  // 各ワードをそれぞれチェック
      string d = divide[j];
      if (S.substr(i, d.size()) == d) {  // iの位置からワードの文字数分チェック
        can2 = true;  // ワードに該当するのならばcan2をtrueに
        i += d.size();  // iをワードの文字数分進める
      }
    }
    if (!can2) {  // can2がfalseの時点でcanをfalseにしループを終了
      can = false;
      break;
    }
  }

  // canの状態によってYES, NOを表示
  if (can) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
