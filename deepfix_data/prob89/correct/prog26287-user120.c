#include <stdio.h>
int main(){
    int k,n,s,c=0;
     scanf("%d",&k);
    scanf("%d",&n);
     int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
        s=a[i]+a[j];
        if(s==k) {
               c=1;
              break; }
        } if(c==1)
            break; }
    if(c==1)
   printf("lucky");
    else
   printf("unlucky");
    return 0; }