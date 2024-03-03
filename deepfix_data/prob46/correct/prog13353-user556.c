#include <stdio.h>
int main(){
    int m,n,f=0,i;
    scanf("%d%d",&m,&n);
    for(i=2;i<n;i++) {
        if(n%i==0)
        f++; }
  if(f==m)
  printf("YES");
  else
  printf("NO");
    return 0; }