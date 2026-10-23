#include <stdio.h>

int main() {
  double w,h;
  scanf("%lf", &w);
  scanf("%lf", &h);
  float BMI;
  BMI = w / ((h/100) * (h/100));
  if ( BMI < 18.5 ) 
    printf("UNDERWEIGHT\n"); 
   else if ( BMI < 25.0f ) 
    printf("NORMAL\n");
   else if ( BMI < 30.0f ) 
    printf("OVERWEIGHT\n");
  else 
    printf("OBESE\n");
  return 0;
}