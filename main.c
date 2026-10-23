#include <stdio.h>

int main() {
  float w,h;
  printf("w");
  scanf("%2f", &w);
  printf("h");
  scanf("%2f", &h);
  int BMI;
  float BMI = w/(h/100)^2;
  if (BMI < 18.5) {
    printf("UNDERWEIGHT");
    
  }
  return 0;
}