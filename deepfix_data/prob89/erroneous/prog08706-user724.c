#include <stdio.h>
int main() {
    int n,m,i,j,a[100];
    scanf("%d\n%d",&n,&m);
    for(i=0;i<100;i++) {
        scanf("%d ",a[i]); }
    for(i=0;i<100;i++) {
        for(j=1;j<m-1;j++) {
            if(a[j]+a[j+1]==n)
            printf("lucky");
            break; } } }
    return 0; }