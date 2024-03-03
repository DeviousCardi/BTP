#include <stdio.h>
int main() {
    int k,i,n,j,t;
    t=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int luc[100];
    i=0;j=i+1;
    for(i=0;i<n;i++) {
        scanf("%d",&luc[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if((luc[i]+luc[j])%k==0) {
               printf("lucky");
               t=2;
               break; } }
        if(t==2)
        break; }
    if(t!=2)
    printf("unlucky");
    return 0; }