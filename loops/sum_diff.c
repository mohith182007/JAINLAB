#include <stdio.h>

int main() {
    int a, b;
    float x, y;

    // Read two integers on the first line
    if (scanf("%d %d", &a, &b) != 2) return 0;
    // Read two floats on the second line
    if (scanf("%f %f", &x, &y) != 2) return 0;

    int sum_int = a + b;
    int diff_int = a - b;

    float sum_float = x + y;
    float diff_float = x - y;

    // Print integers: sum and difference
    printf("%d %d\n", sum_int, diff_int);
    // Print floats rounded to 1 decimal place
    printf("%.1f %.1f\n", sum_float, diff_float);

    return 0;
}
