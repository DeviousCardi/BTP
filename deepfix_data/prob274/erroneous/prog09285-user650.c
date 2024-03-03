#include <stdio.h>
int main(){
     int i,n;
     scanf("%d",&n);
     int a[n];
     a[0]=1;
     for(i=1;i<n;i=i+1)
        scanf("%d",&a[i]);
     for(i=0;i<n;i=i+1){
         for(j=i+1;j<n;j=j+1){
             if(a[i]==a[j])
             break;
         }int t=j;
     int k=j-i;
     }printf("%d %d",t,k);
    return 0; }