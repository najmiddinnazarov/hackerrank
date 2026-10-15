#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, last_digit, count = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        last_digit = n % 10;
        count += last_digit;
        n = n / 10;
    }
    printf("%d", count);
    return 0;
}