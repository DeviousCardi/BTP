#include <stdio.h>
int main() {
    int n,m,i,j,a,sum=0;
    scanf("%d %d",&n,&m);
        for (i=1; i<n; i=i+1) {
            for (j=1; j<m; j=j+1) {
            scanf("%d",a);
            sum=sum+a; }
        printf("%d \n",sum); }
    return 0; }