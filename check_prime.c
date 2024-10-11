#include <stdio.h>
#include <math.h>

int check_prime(int value)
{
    if (value == 1)
        return 0;
    if (value % 2 == 0)
        return 1;
    for (int i = 3; i < sqrt(value) + 1; i += 2)
    {
        if (value % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    printf("%d %d", 2048, check_prime(2048));
}