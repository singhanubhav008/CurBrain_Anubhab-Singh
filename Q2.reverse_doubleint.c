#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n ;
   printf("enter a number : ");
   scanf("%d",&n);
   int rev = 0;
   while(n!=0){
    int rem = n%10;
    rev = rev*10 + rem;
    n = n/10;
   }
  int double_rev = rev * 2;
  printf("The double of the reversed number is: %d\n", double_rev);
  return 0;
}