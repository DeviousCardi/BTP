#include <stdio.h>
int main(){
 int n,m,p=0;
 scanf("%d %d",&m,&n);
 for(i=2,i<n,i++) {
if (n%i==0)
    p=p+1; }
 if(p==m)
 printf("YES");
 else
 printf("NO");
    return 0; }