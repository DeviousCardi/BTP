#include <stdio.h>
int main(){
 int ar[10000],temp,i,sum=0,j=0,n;
 scanf("%d\n",&n);
 for(i=0;i<n;i=i+1) {
     scanf("%d",&ar[i]);
     ar[i]=ar[j]; }
 forj=0;j<n;j=j+1) {
    for(i=0;i<n;i=i+1) {
        if(ar[i]<=ar[j]) {
               printf("%d ",ar[j]); } } }
    printf("end");
    return 0; }