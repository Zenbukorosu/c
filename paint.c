#include <stdio.h>
#define COVERAGE 300
int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter numbers of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 1 : 0;
        printf("You need %d %s of paint.\n", cans, (cans > 1) ? "cans" : "can");
        printf("Enter next value:\n");
    }

    return 0;
}