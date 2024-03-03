#include <stdio.h>
int chair[100000] = {0};
int large(int st, int n, int size) {
    int largest = 0;
    int large_pos = 0;
    int i = 0;
    int flag = 1;
    for (i = 0; i < size; i++) {
        if ((chair[i] > largest) && (chair[i] <= st)) {
            if ((chair[i] == st) && (flag == 1)) {
                flag--;
                continue;
            } else {
                largest = chair[i];
                large_pos = i; } } }
    if (n == 0) {
        return largest;
    } else {
        return large(largest, n - 1, size); } }
int main() {
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &chair[i]); }
    int l = large(99, k - 1, n);
    printf("%d", l);
    return 0; }