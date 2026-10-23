#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  int tong_tien = 0;
  if (a <= 50)
    tong_tien = a * 1678;
  else if (a <= 100) 
    tong_tien = 50 * 1678 + (a - 50) * 1734 ;
  else if (a <= 200) 
    tong_tien = 50 * 1678 + 50 * 1734 + ( a - 100 ) * 2014 ;
  else if (a <= 300) 
    tong_tien = 50 * 1678 + 50 * 1734 + 50 * 2014 + ( a - 150 ) * 2536 ;
  else if (a <= 400) 
    tong_tien = 50 * 1678 + 50 * 1734 + 50 * 2014 + 50 * 2536 + ( a - 200 ) * 2834 ;
  else 
    tong_tien = 50 * 1678 + 50 * 1734 + 50 * 2014 + 50 * 2536 + 50 * 2834 + ( a - 250 ) * 2927 ;
  
  printf("%d", tong_tien);
  return 0;
}