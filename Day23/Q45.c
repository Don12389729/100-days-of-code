#include <stdio.h>
int main() {
    int n, i;
    double s = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s += (2.0 * i) / (4.0 * i - 1);
    printf("Approximate sum: %.2f", s);
    return 0;
}
