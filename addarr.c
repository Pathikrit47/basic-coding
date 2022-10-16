#include <stdio.h>
//this is the main function
int main()
{
    int a[100], index, num, value;
    printf("enter the number of elements of the array\n");
    scanf("%d\n", &num);
    printf("enter thr %d elements:\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the position where you add the element:\n");
    scanf("%d\n", &index);
    printf("enter the value of insert:\n");
    scanf("%d\n", &value);
    for (int i = num - 1; i >= index - 1; i--)
    {
        a[i + 1] = a[i];
        a[index - 1] = value;
    }
    printf("new array is:\n");
    for (int i = 0; i <= num; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}