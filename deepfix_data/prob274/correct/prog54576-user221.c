#include <stdio.h>
int main(){
    int n,a,i,j;
    int count=0;
    scanf("%d",&n);
    int k[n+1];
    for(i=1;i<=n;i++) {
        scanf("%d",&k[i]); }
    int t=0;
    a=1;
    for(t=0;t<=n;t++) {
        for(j=k[a];count<=n;) {
            count++;
            if(j==a) {
                printf("%d",count);
                return 0; }
            j=k[j]; }
        a=k[a]; }
    printf("%d",count);
    return 0; }