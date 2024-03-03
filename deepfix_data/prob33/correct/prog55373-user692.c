#include <stdio.h>
int main() {
    int health = 0;
    int p = 0;
    scanf("%d\n%d", &health, &p);
    int curr_height = 0;
    int prev_height = 0;
    p--;
    scanf("%d", &prev_height);
    while (p) {
        if (curr_height - prev_height < 0) {
            health -= curr_height - prev_height; }
        if (health <= 0) {
            printf("No");
            return 0; }
        p--; }
    printf("Yes");
    return 0; }