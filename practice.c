/*#include <stdio.h>
int gcd (int a,int b);
int main (){
int i,j;
printf("enter the numbers: \n");
scanf("%d%d",&i,&j);
printf("the gcd is: %d",gcd(i,j));
return 0;
}
int gcd (int a,int b)
{
    if (a==b)
    {
        return a;
    }
    if (a%b==0)
    {
        return b;
        
     }
    if (b%a)
    {
        return a;
    }
    if (a>b)
    {
        return (gcd(a%b,b));
        
    }
    else 
    {
      return( gcd(a,b%a));
    
    }
    
       
}*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start=NULL;
struct node *crnode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);


}
void insertnode()
{
    struct node *temp , *t;
    temp=crnode();
    printf("enter a number");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if (start==NULL)
    {
        start=temp;
    }
        else
        {
            t=start;
            while (t->link!=NULL)
            {
                t=t->link;
            }
            t->link=temp;
        }
}

void delnode()
{
    struct node *r;
    if (start==NULL)
    {
        printf("\n the list is empty");
    }
    else
    {
        r=start;
        start=start->link;
        free(r);
    }
}

void viewlist()
{
    struct node *t;
    if (start==NULL);
    {
        printf("\n list is empty");
    }
    else
    {
       
        while (t!=NULL)
        {
            printf("%d",t->)
        }
        


    }
}
int main (){
struct node *x ,*t;
insertnode(x,t);
return 0;
}