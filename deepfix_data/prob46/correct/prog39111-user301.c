#include <stdio.h>
int main(){
 int m,n,i,count;
 scanf("%d %d",&m,&n);
 count=0;
 for(i=2;i<n;i++) {
     if(n%i == 0)
     count ++; }
 if(count==m)
 printf("YES");
 else
 printf("NO");
    return 0; }