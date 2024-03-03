#include <stdio.h>
#include <stdlib.h>
int catalan(int num,int a[]) {
    int i,m;
    for(i=0;i<15;i++) {
          if(a[i]>num)
          m=a[i];
          break; }
      return m; }
int main() {
     int n,num,j,i=0;int a[15];
     a[0]=1;
     for(j=1;j<15;j++) {
           a[j]=(float)2 * (2j-1) / (i+1) * a[j]; }
    scanf("%d\n",&n);
     while(i<n) {
         scanf("%d\n",&num);
         printf("%d\n",catalan(num,a));
         i++; }
  return 0; }