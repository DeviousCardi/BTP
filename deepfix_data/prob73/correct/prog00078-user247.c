#include <stdio.h>
int main() {
    int n,m,i,j,a,sum=0,max=0;
    scanf("%d %d \n",&n,&m);
        for (i=1; i<n; i=i++) {
            for (j=1; j<m; j=j++) {
             scanf("%d",&a);
             sum=sum+a; }
    if(max<sum){max=sum;}
    sum=0;
    scanf("\n"); }
    printf("%d",max);
    return 0; }