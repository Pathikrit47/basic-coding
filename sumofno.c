#include <stdio.h>
int main (){
int f, sum=0;
for(int i =10;i<100;i++){
    f=1;
    for(int j=2;j<i;j++){
        if(i%j==0){
    f=0;
    break;}}
    if (f==1)
    {
        sum=sum+i;
    }
    
}
printf("sum is %d", sum);
return 0;
}