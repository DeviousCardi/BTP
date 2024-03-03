#include <stdio.h>
int main() {
    int n,m,i,j,a[100];
    scanf("%d\n%d",&n,&m);
    for(i=0;i<m;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<m;i++) {
        for(j=i;j<m-1;j++) {
            if(n==a[j]+a[j+1])
            printf("lucky");
            break; }
        if(i==4)
        printf("unlucky"); }
    return 0; }