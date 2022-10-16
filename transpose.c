/*#include <stdio.h>
char* reverse(char *p)
{
    int i,l;
    char t;
    for (int l = 0;*(p+l)!= '\0'; l++);
        for (int i = 0;i<l/2; i++)
        {
            t=*(p+i);
            *(p+i)=*(p+l-1-i);
            *(p+l-1-i)=t;
        }
    return (p);
}
int length (char *p)
{
    int i;
    for (int i = 0;*(p+i)!='\0'; i++);
    return i;
    
}
int main (){
    /*char s[100];
    printf("enter any word:\n ");
    scanf("%s",s);
    printf("%s", length("little"));
return 0;
}*/
 
#include <stdio.h>
int main (){
    int a[50][50];
   int i=0,j=0,n=0,m=0;
   printf("enter the number of rows:\n");
   scanf("%d",&n);
   printf("enter the number of column:\n");
   scanf("%d",&m);
   printf("enter elements:\n");
   for (int i = 0; i <n; i++)
   { 
    for (int j = 0; j <m; j++)
    {
         printf("enter the values [%d][%d]",i,j);
        scanf("%d",&a[i][j]);
    }
    
   }
   printf("the matrix is:\n");
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j <m; j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
   }
   printf("the transpose is:\n");
    for (int i = 0; i < n; i++)
   {
    for (int j = 0; j <m; j++)
    {
        printf("%d\t",a[j][i]);
    }
    printf("\n");
   }
return 0;
}