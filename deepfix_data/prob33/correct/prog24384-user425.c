#include <stdio.h>
int main() {
    int h, p, n1 = -1, n2, i;
    scanf("%d", &h);
    scanf("%d", &p);
    for (i = 0; i < p; i++) {
        scanf("%d ", &n2);
        if (n1 != -1 && (n1 - n2) > 0) {
            h -= (n1 - n2); }
        n1 = n2; }
    if (h > 0)
        printf("Yes");
    else
        printf("No");
    return 0; }