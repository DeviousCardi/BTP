#include <stdio.h>
int main() {
    int m,n,i,j,sum=0,MAX=-1;
    scanf("%d%d",&n,&m);
    int f[n*m];
    for(i=0;i<n;i++) {
        sum = 0;
        for(j=0;j<m;j++) {
            scanf("%d",&f[i*m+j]);
            sum=sum+f[i*m+j];
            printf("%d\n",sum); }
        if(sum > MAX)
        sum = MAX; }
    printf("%d",MAX);
    return 0; }