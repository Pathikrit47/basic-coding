#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct fun input();
void out(struct fun s);
struct fun
{
  int age;
  char name[20];
  float acc;
};

int main()
{
  int n, i;

  printf("enter the sl no.: ");
  scanf("%d", &n);

  struct fun d;

  for (int i = 1; i <= n; i++)
  {
    printf("SL NO: %d\n", i);
    d = input();
     out(d);
  }

  //printf(sizeof(d));
  //printSizeOf(d);

  return 0;
}
struct fun input()
{
  struct fun s;
  printf("enter the age: \n");
  scanf("%d", &s.age);
  fflush(stdin);
  printf("enter the name: \n");
  gets(s.name);
  printf("enter balance:\n");
  scanf("%f", &s.acc);

  return (s);
}
void out(struct fun s)
{
  FILE *fp;
  fp = fopen("info.txt", "a");
  fprintf(fp, "AGE: %d \n", s.age);
  fprintf(fp, "NAME: %s \n", s.name);
  fprintf(fp, "BALANCE: %f \n", s.acc);
  fclose(fp);
}