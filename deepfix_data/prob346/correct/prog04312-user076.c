#include <stdio.h>
int main(){
 int ar[10000],i,j,p,n;
 scanf("%d\n",&n);
 for(i=0;i<n;i=i+1) {
     scanf("%d",&ar[i]); }
 for(j=0;j<n;j=j+1)
 {    p=0;
    for(i=0;i<n;i=i+1) {
        if(ar[i]<=ar[j]) {
               p=ar[i]; } }
         printf("%d ",ar[i]); }
    printf("end");
    return 0; }