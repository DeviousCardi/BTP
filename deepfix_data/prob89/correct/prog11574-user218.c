#include <stdio.h>
int main(){
    int a[100],k,n,i,j;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
          scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
          for(j=i+1;j<n;j++) {
                if(a[i]+a[j]==k)
                printf("lucky");
                break; } }
      if(i==n-2)
      printf("unlucky");
    return 0; }