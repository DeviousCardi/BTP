#include<stdio.h>
#include<limits.h>
int main() {
    int i,n,m,j,a,k;
    scanf("%d %d",&n,&m);
    int max[m];
    for(i=0;i<m;i++)
    max[i]=0;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a);
            if(max[i]<a)
            max[i]=a; }
        printf("%d\n",max[i]); }
    k=max[0];
    for(i=0;i<m;i++) {
        if(k>max[i])
        k=max[i]; }
    printf("%d",k);
    return 0; }