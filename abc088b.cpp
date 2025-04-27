#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> cards(N);
  for (int i = 0; i < N; i++) {
    cin >> cards.at(i);
  }

  sort(cards.begin(), cards.end());
  reverse(cards.begin(), cards.end());

  int A = 0;
  int B = 0;

  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      A += cards.at(i);
    } else {
      B += cards.at(i);
    }
  }

  cout << A - B << endl;
  
  return 0;
}
