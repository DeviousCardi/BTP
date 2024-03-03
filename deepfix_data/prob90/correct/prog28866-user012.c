#include <stdio.h>
int main() {
    int flag=0;
    int k,n;
    scanf("%d\n",&k);
    scanf("%d",&n);
    int a[501];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int j=0;j<n-1;j++) {
        for(int m=j+1;m<n;n++) {
          while(k==a[j]+a[m]) {
               flag=1;
               break; } } }
           if(flag==1)
           printf("lucky");
           else
           printf("unlucky");
    return 0; }