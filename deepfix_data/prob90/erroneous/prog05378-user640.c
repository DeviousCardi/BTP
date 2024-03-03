#include <stdio.h>
int main() {
    int n,k;
    scanf("%d\n%d",&k,&n);
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for (i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i!=j && a[i]+a[j]==k)
                printf("lucky");
            else printf("unlucky"); } }
    return 0; }