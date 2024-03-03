#include <stdio.h>
int main(){
    int n;
    int i,x;
    scanf("%d",&n);
    int val[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&val[i]); }
    for(i=0;i<n;i++) {
       x= max(val[i],val[i+1]); }
    for(i=0;i<n;i++) {
        printf("%d",val[i]); }
    printf("end");
    return 0; }
 int max(int a, int b) {
     if( a>b)
      return a;
     else
      return b; }