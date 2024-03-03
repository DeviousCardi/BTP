#include <stdio.h>
int chair[100000] = {0};
int large(int st, int n, int size) {
    int largest = 0;
    int large_pos = 0;
    int i = 0;
    for (i = 0; i < size; i++) {
        if ((chair[i] > largest) && (chair[i] < st)) {
            largest = chair[i];
            large_pos = i; } }
    printf("%d ", n);
    printf("%d\n", largest);
    if (n == 0) {
        return largest;
    } else {
        return large(largest, n - 1, size); } }
int main() {
    chair[0] = 5;
    chair[1] = 3;
    chair[2] = 10;
    chair[3] = 7;
    chair[4] = 6;
    int l = large(99, 4, 5);
    printf("%d", l);
    return 0; }