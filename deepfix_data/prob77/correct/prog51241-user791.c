#include <stdio.h>
int max(int a,int b){
    if(a>b)
      return a;
    else
      return b; }
int min(int a,int b){
    if(a<b)
      return a;
    else
      return b; }
int main() {
    int a[1000],M,m,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    M=a[0];
    for(i=1;i<n;i++){
       M=max(M,a[i]); }
    m=a[0];
    for(i=1;i<n;i++){
       m=min(m,a[i]); }
    printf("%d %d",M,m);
    printf("end");
    return 0; }