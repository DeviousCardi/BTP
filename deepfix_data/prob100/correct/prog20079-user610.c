#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,x,min,ma=INT_MIN;
    scanf("%d %d",&n,&m);
    int max[m];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&x);
            if(x>ma) {
                ma=x; } }
        max[i]=ma; }
    min=max[0];
    for(i=1;i<m;i++) {
        if(max[i]<min)
        min=max[i]; }
    printf("%d",min);
    return 0; }