#include <stdio.h>
int main(){
    int k,n,s,c=0;
    int a[n];
    scanf("%d",&k);
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
        s=a[i]+a[j];
        if(s==k) {
               c++;
               return 0; } } }
  if(c==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }