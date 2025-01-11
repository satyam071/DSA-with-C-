#include <stdio.h>

int main() {
    int a;
    printf("ENTER YOUR AGE\n");
    scanf("%d", &a);

    if (a < 5) {
        printf("NO FARE IS APPLICABLE\n");
    } else if (a >= 5 && a <= 15) {
        printf("HALF FARE WILL BE APPLICABLE\n");
    } else if (a > 15 && a <= 50) {
        printf("FULL FARE WILL BE APPLICABLE\n");
    } else if (a > 50) {
        printf("HALF FARE WILL BE APPLICABLE\n");
    }

    return 0;
}
