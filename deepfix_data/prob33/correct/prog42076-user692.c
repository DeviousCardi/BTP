#include <stdio.h>
int main() {
    int health = 0;
    int p = 0;
    scanf("%d\n%d", &health, &p);
    int curr_height = 0;
    int prev_height = 0;
    scanf("%d", &prev_height);
    p--;
    while (p--) {
        scanf("%d", &curr_height);
        if ((curr_height - prev_height) < 0) {
            health -= curr_height - prev_height; }
        prev_height = curr_height; }
    health > 0 ? printf("Yes") : printf("No");
    return 0; }