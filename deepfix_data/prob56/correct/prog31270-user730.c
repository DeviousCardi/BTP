#include <stdio.h>
#include <stdlib.h>
int catalan(int num,int a[]) {
    int k,m;
    for(k=0;k<15;k++) {
          if(a[k]>num) {
          m=a[k]; }
          break; }
      return m; }
int main() {
     int n,num,j,i=0;int a[15];
     a[0]=1;
    int prod=1;
     for(j=1;j<15;j++) {
           prod=(2.0)*(2*j-1)*prod;
           prod=prod/(j+1);
           prod=(int)prod;
          a[j]=prod; }
       scanf("%d\n",&n);
     while(i<n) {
         scanf("%d\n",&num);
         printf("%d\n",num);
      printf("%d\n",catalan(num,a));
         i++; }
  return 0; }