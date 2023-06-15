/* Write a program to print exponent part of double variable in hexadecimal and binary format.

*/
#include <stdio.h>

void printExponent(double d) {
  // Get the exponent part of the double variable.
  int exponent = *(int *)&d;

  // Convert the exponent to hexadecimal format.
  char hexExponent[10];
  sprintf(hexExponent, "%x", exponent - 127);

  // Convert the exponent to binary format.
  char binaryExponent[32];
  int i;
  for ( i = 0; i < 8; i++) {
    binaryExponent[i] = ((exponent >> (7 - i)) & 1) + '0';
  }

  // Print the exponent in hexadecimal and binary format.
  printf("Exponent: %s (%s)\n", hexExponent, binaryExponent);
}

int main() {
  // Get a double variable from the user.
  double d;
  printf("Enter a double variable: ");
  scanf("%lf", &d);

  // Print the exponent part of the double variable.
  printExponent(d);

  return 0;
}
