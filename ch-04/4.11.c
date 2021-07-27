// 4.11 (Find the Smallest)

#include <limits.h>
#include <stdio.h>

int main() {
  int n, a, smallest = INT_MIN;

  scanf("%d", &n);
  while (n--) {
    scanf("%d", &a);
    if (a < smallest) {
      smallest = a;
    }
  }
  printf("Smallest number is %d", a);

  return 0;
}