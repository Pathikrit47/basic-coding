#include <stdio.h>
#include <math.h>
int main()
{
    int gojo_sensei = 3000, itadori_yuji;
    int power_levels;
    printf("Enter the power level of Itadori Yuji");
    scanf("%d", &itadori_yuji);
    if (itadori_yuji >= 3000)
    {
        power_levels = itadori_yuji - sqrt(itadori_yuji);
        printf("Power Levels depleted to %d\n", power_levels);
        printf("Gojo will see you now");
    }
    else
    {
        printf("Level Up Required minimum of %d!", (gojo_sensei - itadori_yuji));
    }
}