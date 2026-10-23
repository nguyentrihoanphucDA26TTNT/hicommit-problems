#include <stdio.h>

int main() {
  double w,h;
  scanf("%lf", &w);
  scanf("%lf", &h);
  int BMI;
  BMI = w / (h/100) * (h/100);
  if (BMI < 18.5) {
    printf("UNDERWEIGHT\n"); 
  }else if (18.5 ≤ BMI < 25) {
    printf("NORMAL\n");
  }else if (25 ≤ BMI < 30){
    printf("OVERWEIGHT\n");
  }else (BMI ≥ 30){
    printf("OBESE\n");
  }
  
  
  return 0;
}