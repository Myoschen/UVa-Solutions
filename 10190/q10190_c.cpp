#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
  long long int n, m;
  int count;
  long long int result[1000];
  // 需匯入 stdbool.h
  bool isBoring;

  while(scanf("%lld %lld", &n, &m) != EOF) {
    count = 0;
    isBoring = false;
    // 需匯入 string.h
    memset(result, 0, 1000 * sizeof(int));
    
    if (m > n || m <= 1 || n <= 1) {
      printf("Boring!\n");
      continue;
    } else {
      while (n > 1) {
        if (n % m == 0) 
          result[count++] = n;
        else {
          isBoring = true;
          break;
        }
        n /= m;
      }
    }

    if (!isBoring) {
      for (int i = 0; i < count; i++)
        printf("%lld ", result[i]);
      printf("1\n");
    } else 
      printf("Boring!\n");
  }

  return 0;
}