#include <stdio.h>

int main() {
    int code[10];
    int index, rotate;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &code[i]);
    }

    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &index, &rotate);
        code[index] = (code[index] + rotate) % 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", code[i]);
    }

    return 0;
}
