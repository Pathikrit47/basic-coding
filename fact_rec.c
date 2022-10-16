#include <stdio.h>
int rec (int n){
if (n==0)
{
return 1;
}
return rec (n-1); n ; }
int main (){
int n;
printf("enter the number\n");
scanf("%d", &n);
printf("%d",rec(n));
return 0;
}