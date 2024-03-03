#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    int max,min;
    int element;
    scanf("%d %d\n",&n,&m);
    scanf("%d",&element);
    max=element;
    printf("%d\n",max);
    for(j=2;j<=n;j++){
        scanf("%d",&element);
        if(element>max) max=element; }
    printf("%d\n",max);
    min=max;
    for(i=2;i<=m;i++){
        scanf("\n%d",&max);
        for(j=2;j<n;j++){
            scanf("%d",&element);
            if(element>max) max=element; }
        if(max<min) min=max; }
    printf("%d",min);
    return 0; }