#include <stdio.h>
int main(){
 int ar[10000],temp,i,sum=0,j=0,n;
 scanf("%d",&n);
 for(i=0;i<n;i=i+1) {
     scanf("%d\n",&ar[i]);
     temp=ar[i];
     ar[i]=ar[j];
     ar[j]=temp; }
 for(j=0;j<n;j=j+1) {
    for(i=0;i<n;i=i+1) {
        if(ar[j]<=ar[i]) {
               printf("%d ",ar[j]);
               sum=sum+1; } }
     if(sum==n)
         break; }
    printf("end");
    return 0; }