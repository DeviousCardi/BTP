#include <stdio.h>
int main() {
    int p,n,m,i,j,a[100],k;
    scanf("%d\n%d",&n,&m);
    for(i=0;i<m;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<m;i++) {
        for(j=i;j<m-1;j++) {
            k=a[j]+a[j+1];
            if(k==n)
            printf("lucky");
            break; }
    p=k; }
    if(k!=n && p!=n)
    printf("unlucky");
    return 0; }