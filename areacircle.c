#include <stdio.h>
float area(float r);
int main (){
float x,y;
printf("enter the redious of circle:\n");
scanf("%f",&x);
/*printf("enter the value of pi:\n");
scanf("%f\n",&y);*/
printf("area of circle is %f\n",area(x));
return 0;
}
float area(float r)
{
float  result = 3.14*(r*r);
return result;
}