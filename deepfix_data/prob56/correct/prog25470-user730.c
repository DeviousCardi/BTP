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
     for(j=1;j<15;j++) {
           a[j]=(int)(((2.0)*(2j-1))/(j+1))*a[j-1]; }
    scanf("%d\n",&n);
    printf("%d\n",a[3]);
     while(i<n) {
         scanf("%d\n",&num);
         i++; }
  return 0; }