// armstrong series

#include <math.h>

int main()
{
    int num, original, remainder, result, n;
    for (int i = 100; i <= 500; i++)
    {
        num = i;
        original = num;
        n = 0;
        while (original != 0)
        {
            original /= 10;
            n++;
        }
        original = num;
        result = 0;
        while (original != 0)
        {
            remainder = original % 10;
            result += (int)(remainder * pow(remainder, n));
            original /= 10;
        }
        if (result == num)
        {
            printf("%d is an Armstrong number.\n", num);
        }
    }
    return 0;
}
