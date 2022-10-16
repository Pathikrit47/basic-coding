#include<stdio.h>
int main(){
    int a = 11;
    while(a>10){
        printf("%d", &a);
        a++;
    }

return 0;
}