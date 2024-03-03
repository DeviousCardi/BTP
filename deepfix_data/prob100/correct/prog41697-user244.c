#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,x,max,min=INT_MAX;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<m;i++) {
        max=INT_MIN;
        for(j=0;j<n;j++) {
            scanf("%d",&x);
            if(x>max)
            max=x; }
        if(max<min)
        min=max; }
    printf("%d",min);
    return 0; }