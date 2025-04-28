#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  // 餅を保持するベクトル
  vector<int> mochi(N);
  for (int i = 0; i < N; i++) {
    cin >> mochi.at(i);
  }

  // 大きさ別に餅の種類を数える連想配列
  // keyが餅の大きさ、valueが数
  map<int, int> kinds;

  // すでにkeyが登録されていれば数を増やす
  // 登録されていなければkeyを登録し数を1にする
  for (int i = 0; i < N; i++) {
    if (kinds.count(mochi.at(i))) {
      kinds.at(mochi.at(i)) += 1;
    } else {
      kinds[mochi.at(i)] = 1;
    }
  }

  // 連想配列の要素数（すなわち餅の種類）を取得
  cout << kinds.size() << endl;

  return 0;
}

  // Another answer
  // set（重複のないkeyだけのmap）を使う
  // set<int> se;
  // for (int i = 0; i < N; i++) {
  //   se.insert(mochi.at(i));
  // }

  // cout << se.size() << endl;
