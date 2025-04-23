#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  cin >> s;
  
  if (s >= 100) {
    int s100 = s / 100;
    int s10 = (s - 100) / 10; 
    int s1 = (s - 100) % 10;
    cout << (s1 + s100 + s10) << endl;
  } else if (s >= 10) {
    int s10 = s / 10;
    int s1 = s % 10;
    cout << (s1 + s10) << endl;
  } else {
    cout << s << endl;
  }

  return 0;
}
