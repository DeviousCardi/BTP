#include <stdio.h>
int main(){
    int n,r[100],i,j,x,t,k,c=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&r[i]); }
    for(i=0;i<n;i++) {
        if(r[i]==1)
        break; }
    for(j=0;j<n;j++) {
        for(x=j+1;x<n;x++) {
            if(r[x]==r[j]) {
                c=c+1; } } }
    t=n-c;
    k=n-1-(i-x);
    printf("%d %d",t,k);
    return 0; }