#include<stdio.h>
#include<limits.h>
int main() {
    int i,j,a,n,m,max,min;
    scanf("%d%d\n",&n,&m);
    for(i=0;i<m;i++) {
        scanf("%d",&max);
        for(j=1;j<n;j++) {
            scanf("%d",&a);
            if(a>max)
                max=a; }
        scanf("\n");
        if(i==0)
            min=max;
        else {
            if (min>max)
                min=max; } }
    printf("%d",min);
    return 0; }