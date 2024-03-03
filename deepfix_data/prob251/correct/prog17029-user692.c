#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if (m == 1) {
        return m; }
    if (m == 3) {
        int o = x;
        int count = 0;
        while (o > 0) {
            count += getways(o, 1);
            o = o - 3; }
        if (o == 0) {
            count++; }
        return count; }
    if (m == 5) {
        int i = x;
        int count = 0;
        while (i) {
            count += getways(i, 3);
            i = i - 5; }
        if (i == 0) {
            count++; }
        return count; } }
int main() {
    int n;
    scanf("%d", &n);
    printf("%ld", getways(n, 5));
    return 0; }