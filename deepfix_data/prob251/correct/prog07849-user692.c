#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if (m == 1) {
        return x; }
    if (m == 3) {
        int i = x;
        int count = 0;
        while (i) {
            count += getways(i - 3, 1);
            i = i - 3; }
        return count; }
    if (m == 5) {
        int i = x;
        int count = 0;
        while (i) {
            count += getways(i - 5, 3);
            i = i - 5; }
        return count; } }
int main() {
    int n;
    scanf("%d", &n);
    printf("%ld", getways(n, 5));
    return 0; }