#include<stdio.h>
struct Complex{
	float real,imag;
};
typedef struct Complex complex;

// Function to add two complex numbers
complex addComplexNumbers(complex num1, complex num2) {
    complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

// Function to multiply two complex numbers
complex multiplyComplexNumbers(complex num1,complex num2) {
    complex result;
    result.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    result.imag = (num1.real * num2.imag) + (num1.imag * num2.real);
    return result;
}
void writeComplexNumber(complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imag);
}

int main()
{
	complex num1,num2,sum,product;
	
	printf("Enter real and imaginary parts of the 1st complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter real and imaginary parts of the 2nd complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);
    
	sum = addComplexNumbers(num1, num2);
    printf("\nSum of the complex numbers:\n");
    writeComplexNumber(sum);

    product = multiplyComplexNumbers(num1, num2);
    printf("\nProduct of the complex numbers:\n");
    writeComplexNumber(product);
    
    return 0;
}
