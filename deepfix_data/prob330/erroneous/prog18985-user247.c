#include <stdio.h>
int main(){
    int i,x[100],p+0,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]); }
    for(j=1;j<(n-1);j++) {
        if((x[j]>x[j-1]) && (x[j]>x[j+1])) {
            p=p+1; }
    }printf("%d",p);
    return 0; }