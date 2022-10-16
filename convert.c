#include <stdio.h>
float convert(float a);
int main()
{
    float x, y;
    printf("enter the value of x\n-->");
    scanf("%f", &x);
    printf("the value of fahrenheit is %f\n-->", convert(x));
    return 0;
}
float convert(float a)
{
    float result = (a * 9 / 5) + 32;
    return result;
}