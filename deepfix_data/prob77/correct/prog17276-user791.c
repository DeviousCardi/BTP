#include <stdio.h>
int max(int a,int b){
    if(a>b)
      return a;
    else
      return b; }
int main() {
    int a[1000],M,n,i;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n;i++){
       M=max(a[i],a[i+1]);
       M=max(M,a[i+2]); }
    printf("%d",M);
    printf("end");
    return 0; }