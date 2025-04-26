#include <bits/stdc++.h>
using namespace std;

// 格桁の数を合計して返す関数
int calc(int n) {
  int rank = 0;
  while (n > 0) {
    // 10進数なので10で割った余りを求める
    rank += n % 10;
    // 10で割るごとに引数の数を更新する
    n /= 10;
  }
  return rank;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int ans = 0;
  for (int n = 1; n <= N; n++) {
    int sum = calc(n);
    if (sum >= A && sum <= B) {
      ans += n;
    }
  }
  cout << ans << endl;
}
