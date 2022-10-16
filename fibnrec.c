#include <stdio.h>
int fib (int k);
int main (){
int n;
printf("enter the number: \n");
scanf("%d",&n);
printf("the fibonacci series is: %d",fib(n));
return 0;
}
int fib (int k)
{
    if (k==1||k==2)
    {
        return 1;
    }
    else
    {
        int s=fib(k-1)+fib(k-2);
        return s;
    }
    
    
}