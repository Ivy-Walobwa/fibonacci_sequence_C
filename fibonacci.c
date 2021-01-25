#include<stdio.h>

int* fibonacci(int n) 
{ 
  /* Declare an array to store Fibonacci numbers. */
  int* f= malloc(sizeof(int) * n); 
  int i; 
  
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      /* Add the previous 2 numbers in the series 
         and store it */
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f; 
} 
  
int main () 
{ 
    int* fib;
    int i, n;
    printf("Print first few numbers of the Fibonacci Sequence\n");
    printf("Enter number: ");
    scanf("%d", &n);
 
    fib = fibonacci(n);
    for(i = 0; i<n; i++){
      printf("%d,", fib[i]);
    }
   
  return 0; 
} 