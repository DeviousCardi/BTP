#include <stdio.h>
int main(){
 int ar[10000],temp,i,sum=0,j,n;
 scanf("%d\n",&n);
 for(i=0;i<n;i=i+1) {
     scanf("%d",&ar[i]); }
 for(i=0;i<n;i=i+1)
    printf("%d ",ar[i]);
printf("\n\n");
 for(j=0;j<n;j=j+1) {
    for(i=0;i<n;i=i+1) {
        if(ar[i]<=ar[j]) {
               printf("%d ",ar[i]); } } }
    printf("end");
    return 0; }