#include <stdio.h>
int main (){
int num,reverse,rem;
printf("enter the number :\n");
scanf("%d",&num);//456//
while(num!=0){
    rem=num%10; //6//
    reverse=reverse*10+rem;
    num/=10;
}
printf("the reverse number is : %d\n",reverse);
return 0;
}