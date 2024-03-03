#include <stdio.h>
int main(){
 int i,n,m,count=0;
 scanf("%d%d",&n,&m);
 for(i=2;i<n;i=i+1)
 { if (n%i==0)
     {count=count+1;}
 if (count==m)
printf("YES");
else printf("NO"); }
    return 0; }