#include <stdio.h>
int main(){
    int n,i,j,b,k,l; scanf("%d",&n);
    int a[100],count[100];
    for (j=0;j<100;j++) {
            count[j]=0; }
    for (i=0;i<n;i++) {
            scanf("%d",&b);
            a[b]=b;
            count[b]=count[b]+1; }
    for(k=0;k<100;k++) {
           for (l=0;l<count[k];l++) {
               printf("%d ",a[k]); } }
    printf("end");
    return 0; }