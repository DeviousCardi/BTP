#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,x,max,min=9999999;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<m;i++) {
        max=-9999999;
        for(j=0;j<n;j++) {
            scanf("%d",&x);
            if(x>max)
            max=x; }
        if(max<min)
        min=max; }
    printf("%d",min);
    return 0; }