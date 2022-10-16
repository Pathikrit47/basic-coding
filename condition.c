#include <stdio.h>
int main (){
int i ,sum=0 , n;
printf("enter the value of n");
scanf("%d", &n);
for (i=0;i<=n;i++){
    sum +=i;
    if(sum==15){
       break;
    }
}
printf("the value of sum is %d\n",sum);
return 0;
}