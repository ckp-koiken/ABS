#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // MEMO: vectorを宣言時に初期化して直で値を代入するときは要素数を()で指定する必要がない
  vector<string> divide = {"dream", "dreamer", "erase", "eraser"};

  // 全ての文字列を左右反転する（後ろから解く）
  // dreamとdreamerなど順番通りに文字列を見ると被りがある
  // 左右を逆にすれば被らない
  // S自体も反転させて、反転したワードでSを構成できるかを確認する

  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++) {
    reverse(divide.at(i).begin(), divide.at(i).end());
  }

  // 端から順に見ていく
  // 4つのワードで切ることができるのかを判定(can)
  bool can = true;
  for (int i = 0; i < S.size();) {  // Sの大きさ分だけループ(iを増やす処理を書かない）
    bool can2 = false;  // ワードに該当するかを判定(can2)
    for (int j = 0; j < 4; j++) {  // 各ワードをそれぞれチェック
      string d = divide.at(j);
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
