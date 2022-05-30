#include <iostream>
#include <vector>

using namespace std;

int main() {
  // 宣告變數
  long long int n, m;
  vector<long long int> result;
  bool isBoring;

  while (cin >> n >> m) {
    // 初始化
    isBoring = false;
    result.clear(); // 清理 Vector 所有的值
    
    if (m > n || m <= 1 || n <= 1) {
      cout << "Boring!" << endl;
      continue;
    }
    else {
      while(n > 1) {
        if (n % m == 0) 
          result.push_back(n);
        else {
          isBoring = true;
          break;
        }
        n /= m;
      }
    }

    if (!isBoring) {
      for (auto &n : result) {
        cout << n << " ";
      }
      cout << "1" << endl;
    }
    else
      cout << "Boring!" << endl;
  }
  return 0;
}