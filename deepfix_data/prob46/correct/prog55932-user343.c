#include <stdio.h>
int main(){
 int i,m,n,h=0;
 scanf("%d",&m);
 scanf("%n",&n);
    printf("%d  %d\n",n,i);
 for (i=2;i<n;i++) {
    if (n%i==0){
      h=h+1; }
    else
      h=h+0; }
  printf("%d\n",h);
 if (h==m)
   printf("YES");
 else
   printf("NO");
    return 0; }