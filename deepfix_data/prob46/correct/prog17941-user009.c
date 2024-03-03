#include <stdio.h>
int main(){
 int n,m,i;
 scanf("%d %d",&m,&n);
 int count=0;
 for(i=2;i<n;i++)
 {if(n%i==0)
 count=count+1; }
 if(count==m)
 printf("YES");
 else
 printf("NO");
    return 0; }