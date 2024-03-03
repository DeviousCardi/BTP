#include <stdio.h>
int main(){
    int entrances = 0;
    int a = 0;
    int b = 0;
    int gates[200] = {0};
    int min = 200;
    scanf("%d", &entrances);
    for (int i = 0; i < 2 * entrances; i++) {
        scanf("%d", &gates[i]); }
    for (int i = 0; i < 2 * entrances; i++) {
        for (int j = i+1; j < 2 * entrances; j++) {
            if ((gates[i] == gates[j]) {
                if ((j - i) < min) {
                    min = j - i; }
                break; } } }
    printf("d", min);
    return 0; }