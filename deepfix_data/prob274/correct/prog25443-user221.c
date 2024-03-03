#include <stdio.h>
int main(){
    int n,a,i,j;
    int count=0;
    scanf("%d",&n);
    int k[n+1];
    for(i=1;i<=n;i++) {
        scanf("%d",&k[i]); }
    int t=0;
    for(t=0;;t++) {
        for(j=k[a];count<=n;j=k[j]) {
            count++;
            if(j==a){
                printf("%d",count); }
            else ; }
        a=k[a]; }
    return 0; }