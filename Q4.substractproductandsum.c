#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n ;
  
   printf("enter a number : ");
   scanf("%d",&n);
   int original = n;
   int i=1;
   int sum = 0;

   while(n!=0){
    int rem = n%10;
     i = i*rem;
     sum = sum + rem;
    n = n/10;
   }
   int sub = i - sum;
   printf("%d",sub);
   return 0;
}