#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d", &n);
    int a[n];
    scanf("%d", &a[0]);
    for(i=1;i<n;i++) {
        scanf("','");
        scanf("%d", &a[i]); }
    for(i=0;i<n;i++) {
        int count = 0;
        for(j=0;j<n;j++) {
            if(a[j] == a[i]) {
                count += 1; } }
        printf("%d\n", count);
        if(count != a[i]) {
            break; } }
    if(i == n) { }
    else { }
    return 0; }