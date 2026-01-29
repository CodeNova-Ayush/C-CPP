#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);

    return 0;
}
