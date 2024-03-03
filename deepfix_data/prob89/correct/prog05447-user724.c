#include <stdio.h>
int main() {
    int n,m,i,j,a[100],k;
    scanf("%d\n%d",&n,&m);
    for(i=0;i<m;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<m;i++) {
        for(j=i;j<m-1;j++) {
            k=a[i]+a[j+1];
            if(k==n)
            printf("lucky");
            break; }
    if(k==n)
    break; }
    if(k!=n )
    printf("unlucky");
    return 0; }