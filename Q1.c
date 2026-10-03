#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n ;
   printf("enter a number : ");
   scanf("%d",&n);
   int count = 0;
   while(n!=0){
    int rem = n%10;
    count ++;
    n = n/10;
   }
   if(count%2==0){
    printf("TRUE");
   }
   else{
    printf("FALSE");
   }
return 0;
}  