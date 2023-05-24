#include <stdio.h>

int main() {
   int arr[] = {10, 20, 10, 20, 30, 20, 40};
   int size = sizeof(arr) / sizeof(arr[0]);
   int element, frequency = 0;
   
   printf("Enter the element to find its frequency: ");
   scanf("%d", &element);
   
   // Count the frequency of the element
   for (int i = 0; i < size; i++) {
      if (arr[i] == element) {
         frequency++;
      }
   }
   
   printf("The frequency of %d is %d times\n", element, frequency);
   
   return 0;
}

