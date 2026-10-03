#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n ;
  
   printf("enter a number : ");
   scanf("%d",&n);
   int original = n;
   int rev = 0;
   while(n!=0){
    int rem = n%10;
    rev = rev*10 + rem;
    n = n/10;
   }
   if(original==rev){
    printf("%d",rev);
   }
   else{
    printf("%d",original+rev);
   }
   return 0;
}