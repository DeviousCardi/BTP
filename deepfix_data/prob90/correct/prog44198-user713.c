#include <stdio.h>
int main(){
    int k,n,i,j,c=0,a[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=1;j<n;j++) {
            if(a[i]+a[j]==k)
            c=c+1; } }
    if(c==0)
    printf("unlucky");
    if(c!=0)
    printf("lucky");
    return 0; }