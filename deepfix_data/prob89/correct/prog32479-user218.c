#include <stdio.h>
int main(){
    int a[100],k,n,i,j,c;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
          scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
          for(j=i+1;j<n;j++) {
                if(a[i]+a[j]==k) {
                    c=1;
                    break; }
                else {
                    c=0; } } }
      if(c==1)
      printf("lucky");
      else if (c==0)
      printf("unlucky");
    return 0; }