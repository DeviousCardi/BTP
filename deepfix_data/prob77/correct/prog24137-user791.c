#include <stdio.h>
int max(int a,int b){
    if(a>b)
      return a;
    else
      return b; }
int main() {
    int a[1000],M,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    M=a[0];
    for(i=1;i<n;i++){
       M=max(M,a[i]); }
    printf("%d",M);
    printf("end");
    return 0; }