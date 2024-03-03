#include <stdio.h>
int main(){
 int ar[10000],i,j,p,n;
 scanf("%d\n",&n);
 for(i=0;i<n;i=i+1) {
     scanf("%d",&ar[i]); }
 for(j=0;j<n;j=j+1)
 {    p=ar[0];
    for(i=0;i<n;i=i+1) {
        if(ar[i]<=p) {
               p=ar[i]; } }
         printf("%d ",p); }
    printf("end");
    return 0; }