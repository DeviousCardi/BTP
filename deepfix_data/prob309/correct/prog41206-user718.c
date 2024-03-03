#include <stdio.h>
void init(int n, int a[], int num) {
    for( int i = 0; i < n; i++)
        a[i] = num; }
int main() {
    int a[1000000];
    int num[1000000];
    init(1000000, num, -1);
    int n, test, count;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    test = 0;
    for(int i = 0; i < n; i++) {
        if( a[i] == -1) {
            continue; }
        count = 0;
        for(int j = i; j < n; j++) {
            if(a[j] == a[i]) {
                count++;
                a[j] = -1; } }
        if (count != a[i]) {
            test++;
            break; } }
    if (test == 0)
        printf("Yes");
    else
        printf("No");
    return 0; }