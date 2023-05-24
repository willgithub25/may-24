#include <stdio.h>

int main() {
   int a[] = {1, 2, 3};
   int b[] = {10, 20, 30};
   int size_a = sizeof(a) / sizeof(a[0]);
   int size_b = sizeof(b) / sizeof(b[0]);
   int c[size_a + size_b];
   
   int i, j, k;
   
   // Copy elements of array a to c
   for (i = 0; i < size_a; i++) {
      c[i] = a[i];
   }
   
   // Copy elements of array b to c
   for (j = 0, k = size_a; j < size_b; j++, k++) {
      c[k] = b[j];
   }
   
   // Print the merged array c
   for (i = 0; i < size_a + size_b; i++) {
      printf("%d ", c[i]);
   }
   
   return 0;
}

