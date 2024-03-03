#include <stdio.h>
int main(){
 int i, m,n,count;
 count=0;
 scanf("%d%d",&m,&n);
 for(i=2;i<=n;i++)
 { if (n%i==0)
{ count =count+1;}
 if(m==0)
 { printf("YES\n");}
 else { printf("NO\n");} }
    return 0; }