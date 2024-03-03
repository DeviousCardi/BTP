#include <stdio.h>
int main() {
    int k, n, flag=-1;
    scanf("%d %d", &k, &n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if((a[i]+a[j])==k) {
                printf("lucky");
                flag = 0; } }
        if (flag == 0)
            break; }
    if(flag == -1)
        printf("unlucky");
    return 0; }