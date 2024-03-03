#include <stdio.h>
int main(){
    int i,k,n,value,j=1;
    int a[100];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
for( i=0;i<=n-1;i++) {
    for ( j=1;j<=n-1;j++) {
            if (a[i]+a[j]==k)
            printf("lucky\n");
            else printf("unlucky"); } }
    return 0; }