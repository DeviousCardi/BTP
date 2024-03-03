#include<stdio.h>
#include<limits.h>
int main() {
    int a,i,j,m,n,max[10000],min_maximums=INT_MAX;
    scanf("%d%d\n",&m,&n);
    for(i=0;i<n;i++) {
        max[i]=INT_MIN;
        for(j=0;j<m;j++) {
            scanf("%d",&a);
            if(a>max[i])
                max[i]=a; }
        if(min_maximums>max[i])
            min_maximums=max[i]; }
    printf("%d",min_maximums);
    return 0; }