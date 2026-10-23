#include <stdio.h>

int main() {
  double dtb;
  scanf("%lf", &dtb);
  if (dtb >= 9.0 ) 
    printf("A\n");
  else if (dtb >= 8.0 ) 
    printf("B+\n");
  
  return 0;
}