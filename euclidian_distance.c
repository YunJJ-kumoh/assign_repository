#include <stdio.h>
#include <math.h>

typedef struct coord
{
    int x, y;
} coord;

double distance(coord a, coord b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main(void)
{
    coord A = {3.5, 7.5}, B = {9.8, 7.3};
    printf("%lf", distance(A, B));
}