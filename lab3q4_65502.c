
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i = 1;
    int sum = 0;
    double aver = 0;
    int count =0;
    while (i > 0)
    {
        scanf("%d", &i);
        if (i > 0)
        {
            sum += i;
            count++;
        }
    }
    aver=(float)sum/(float)count;
    printf("%d\n", sum);
    printf("%f\n", aver);
    return 0;
}
