#include <stdio.h>
int main(){
 int i,m,n,h=0;
 scanf("%d",&m);
 scanf("%d",&n);
 for (i=2;i<n;i++) {
    if (n%i==0){
      h=h+1; }
    else
      h=h+0; }
 if (h==m)
   printf("YES");
 else
   printf("NO");
    return 0; }