#include <iostream> 

int main(){
  double num1 = 28.0;
  double num2 = 32.0;
  double num3 = 37.0;
  double num4 = 24.0;
  double num5 = 33.0;


  double sum;
  double average;

  sum = num1 + num2 + num3 + num4 + num5;
  average = sum/5;

  std::cout << "Sum: " << sum << '\n';
  std::cout << "Average: " << average << '\n';

return 0;
  
}