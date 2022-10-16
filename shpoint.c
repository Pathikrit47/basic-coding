#include <stdio.h>
void input(int *p)
{
    int i;
    printf("enter the value:\n ");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d",p+i);
    }
    
}
void display (int *p)
{
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n",*(p+i));
    }
    
}
void sh (int *p)
{
    int round,t,i;
    for ( round = 1; round <= 4; round++)
    {
        for (int i = 0; i <= 3; i++)
        {
            if (*(p+i) >*(p+i+1))
            {
                t=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=t;
            }
            
        }
        
    }
    
}
int main (){
int a[5];
input(a);
display(a);
sh(a);
display(a);
return 0;
}