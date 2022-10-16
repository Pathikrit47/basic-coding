#include <stdio.h>
#include <stdbool.h>
struct stu input ();
void show(struct stu s);
struct stu{
    int roll;
    char name[20];
    int age;
};
int main (){
struct stu e;
e=input();
show(e);
return 0;
}

struct stu input (){
    struct stu s;
    printf("enter the roll,Name,Age of a student:\n ");
    scanf("%d",&s.roll);
fflush(stdin);
    gets(s.name);
    scanf("%d",&s.age);
    return (s);
}
void show(struct stu s){
    bool a=0;
    bool b=1;
    printf("\nROLL NO.: %d",s.roll);
    printf("\nNAME: %s",s.name);
    if (s.name==0)
    {
        printf("anonymous");
    }
    else
    {
        printf("%s",s.name);
    }
    
    printf("\nAGE: %d",s.age);

}

