#include <stdio.h>
int main() {
    int n,min,dis,k,i,j,a[200];
    scanf("%d\n",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    min=2*n;
    for(j=0;j<2*n;j++) {
        for(i=j+1;i<2*n;i++) {
            if(a[j]==a[i])
            dis=i-j;
            break; }
    if(min>dis&&min>0)
        {   k=min;
            min=dis;
            dis=k; } }
    printf("%d",min);
    return 0; }