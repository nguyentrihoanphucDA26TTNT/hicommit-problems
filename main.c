#include <stdio.h>

int main() {
  double w,h;
  scanf("%lf", &w);
  scanf("%lf", &h);
  float BMI;
  BMI = w / (h/100) * (h/100);
  if ( BMI < 18.5 ) 
    printf("UNDERWEIGHT"); 
   else if ( BMI >= 18.5, BMI < 25.0 ) 
    printf("NORMAL");
   else if ( 25.0 <= BMI < 30.0 ) 
    printf("OVERWEIGHT");
  else 
    printf("OBESE");
  
  
  
  return 0;
}