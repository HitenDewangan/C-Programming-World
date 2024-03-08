#include <stdio.h>

int main() {
  int number, reversedNumber = 0, remainder, difference, digitSum = 0, temp;

  printf("Enter a three-digit integer with all digits different: ");
  scanf("%d", &number);

  temp = number;
  
  // Reverse the number
  while (number != 0) {
    remainder = number % 10;
    reversedNumber = reversedNumber * 10 + remainder;
    number /= 10;
  }
  
  printf("The reverse of the number is: %d", reversedNumber);

  // Determine the difference between the original and reversed numbers
  difference = temp > reversedNumber ? temp - reversedNumber : reversedNumber - temp;
  printf("\nThe difference is: %d", difference);

  // Calculate the sum of the digits of the difference
  while (difference != 0) {
    digitSum += difference % 10;
    difference /= 10;
  }

  // Print the sum of the digits
  printf("\nSum of digits: %d\n", digitSum);

  return 0;
}
