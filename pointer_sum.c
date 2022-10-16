#include <stdio.h>
int main (){
int first,second,*p,*q,sum;
printf("enter two number to add\n");
scanf("%d%d",&first,&second);
p=&first;
q=&second;
sum=*p+*q;
printf("\n\nsum of the numbers :%d\n",sum);
return 0;
}