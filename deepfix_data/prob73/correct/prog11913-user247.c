#include <stdio.h>
int main() {
    int n,m,i,j,a,sum,max;
    sum=0;
    max=0;
    scanf("%d %d \n",&n,&m);
        for (i=0; i<n; i=i++) {
            for (j=0; j<m; j=j++) {
             scanf("%d",&a);
             sum=sum+a; }
    if(max<sum){max=sum;}
    sum=0;
    scanf("\n"); }
    printf("%d",max);
    return 0; }