#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    int max,min;
    int element;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++){
        scanf("\n%d",&max);
        min=max;
        for(j=2;j<n;j++){
            scanf("%d",&element);
            if(element>=max) max=element; }
        if(max<min) min=max; }
    return 0; }