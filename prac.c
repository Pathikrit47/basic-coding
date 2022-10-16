#include <stdio.h>
float avarage(int a,int b, int c);
int main (){
int x,y,z;
printf("enter the value of x\n:");
scanf("%d",&x);
printf("enter the value of y\n:");
scanf("%d",&y);
printf("enter the value of z\n:");
scanf("%d",&z);
printf("value of the avg is %f\n:",avarage(x,y,z));
return 0;
}
float avarage(int a,int b, int c){
float result;
result = (float)(a+b+c)/3;
return result;
}