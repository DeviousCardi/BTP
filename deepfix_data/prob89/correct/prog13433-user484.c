#include <stdio.h>
int main(){
    int i,k,n,value,j;
    int a[100];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for( i=0;i<=n-1;i++) {
    for (j=i;j<=n-1;j++) {
            if (a[i]+a[j]==k) {
                printf("lucky\n"); return 0; } } }
    printf("unlucky");
    return 0; }