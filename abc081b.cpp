#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
 
  int num = 0;

  while (1) {
    int check = 0;
    for (int i = 0; i < N; i++) {
      if (A.at(i) % 2 == 0) {
        check++;
      }
    }

    if (check == N) {
      for (int i = 0; i < N; i++) {
        A.at(i) /= 2;
      }
    } else {
      break;
    }
    num++;
  }

  cout << num << endl;

  return 0;
}
