#include <stdio.h>
int main(){
    int a[100],k,n,i,j;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
          scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
          for(j=1;j>i;j++) {
                if(a[i]+a[j]==k)
                printf("lucky");
                break; } }
    return 0; }