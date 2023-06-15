#include <stdio.h>

void swap(void *a, void *b)
{
  int size = sizeof(*a);
  // Create temporary variables to store the values of a and b
  void *tmp = malloc(size);
  memcpy(tmp, a, size);
  // Swap the values of a and b
  memcpy(a, b, size);
  memcpy(b, tmp, size);
  free(tmp);
}
int main()
{
  int a = 10;
  char b = 'A';
  printf("Values of a and b before swapping a = %d, b = %c\n", a, b);
  swap(&a, &b); 
  printf("Values of a and b after swapping a = %c, b = %d\n", a, b);
  return 0;
}
