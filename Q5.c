#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n ;
  
   printf("enter a number : ");
   scanf("%d",&n);
   if(n<0){
    printf("Please enter a positive number.\n");
    return 1;
   }
   int result = 0;
   int place = 1;

   while(n!=0){
    int rem = n%10;
     if(rem%2==0){
        rem = 0;
     }
    result += rem * place;
    place *= 10;
    n=n/10;
   }
   printf("number after replacing even digits: %d\n", result);
   return 0;
}
 