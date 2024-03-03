#include <stdio.h>
#include <stdlib.h>
int count=0;
long *memarray[3];
long getways(int x){ {
    for (int i = 0; i <= x; i += 5){
        for (int j = 0; j <= x - i; j += 3){
            count++; } }
    return 0; }
int main() {
    int n;
    scanf("%d", &n);
    getways(n);
    printf("%d", count);
    return 0; }