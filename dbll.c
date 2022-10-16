#include <stdio.h>
#include <stdlib.h>
struct node
{
    int x;
    struct node *prev,*next;

};
struct node *start = NULL;
void insertnode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    printf("enter the number :\n");
    scanf("%d",&n->x);
    n->prev=NULL;
    n->next=NULL;
    if (start==NULL)
    {
        start=n;
    }
    else
    {
        start->prev=n;
        n->next=start;
        start=n;
    }
}
void delnode()
{
    struct node *r;
    if (start==NULL)
    {
        printf("list is empty");
    }
    r=start;
    start=start->next;
    start->prev=NULL;
    free(r);
}
void viewlist()
{
    struct node *t;
    if (start==NULL)
    {
       printf("list is mpty");
    }
    else
    {
        t=start;
        while (t->next!=NULL)
        {
            printf("%d",t->x);
            t=t->next;
        }
        
    }
    
}





int main (){
    struct node a;
insertnode(a);

return 0;
}