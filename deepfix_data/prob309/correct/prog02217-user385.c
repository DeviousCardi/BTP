#include <stdio.h>
int main() {
    int n,i,j,l=0,f=1;
    scanf("%d\n",n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d,",a[i]); }
      for(i=0;i<n;i++) {
          for(j=0;j<n;j++) {
          if(a[i]==a[j])
          l++; } {
               if(l==a[i]) {
                   f=1; }
              else {
                  f=0; }
             if(f==0) {
                 printf("No");
                 return 0; } } }
      if(f==1) {
          printf("Yes"); }
      return 0; }