#include <stdio.h>
int main() {
    int a[1000000];
    int n, test, count;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    test = 0;
    for(int i = 0; i < n; i++) {
        count = 0;
        for(int j = i; j < n; j++) {
            if(a[j] == a[i])
                count++; }
        if (count != a[i]) {
            test++;
            break; } }
    if (test == 0)
        printf("Yes");
    else
        printf("No");
    return 0; }