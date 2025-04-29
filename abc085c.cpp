#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int64_t Y;
  cin >> N >> Y;

  // お札3種類を全探索するとTLEする
  // 10000円札と5000円札だけ全探索
  for (int a = 0; a < N + 1; a++) {
    for (int b = 0; b < N + 1; b++) {
      // 1000円札をNとの差で求める
      int c = N - (a + b);
      if (0 <= c) {
        if (10000LL * a + 5000LL * b + 1000LL * c == Y) {
          // 条件に合致したら枚数を表示しプログラムを抜ける
          cout << a << " " << b << " " << c << endl;
          return 0;
          // 0以外で終了するとREになるらしいので注意
        }
      }
    }
  }

  // 全てのfor文が終わったら条件を満たしていないので-1を表示
  cout << -1 << " " << -1 << " " << -1 << endl;

  return 0;

}
