#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  int tong_tien = 0;
  if (a <= 50)
    tong_tien = a * 1678;
  else if (a <= 100) 
    tong_tien = 50 * 1678 + (a - 50) * 1734 ;
  
  printf("%d", tong_tien);
  return 0;
}