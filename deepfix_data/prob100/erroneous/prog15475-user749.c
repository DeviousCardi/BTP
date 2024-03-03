#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    int max,min;
    int element;
    scanf("%d %d",&n,&m);
    max=scanf("\n%d",&element)
    for(j=2;j<=n;j++){
        scanf("%d",&element);
        if(element>max) max=element; }
    min=max;
    for(i=2;i<=m;i++){
        scanf("\n%d",&max);
        for(j=2;j<n;j++){
            scanf("%d",&element);
            if(element>=max) max=element; }
        if(max<min) min=max; }
    printf("%d",min);
    return 0; }