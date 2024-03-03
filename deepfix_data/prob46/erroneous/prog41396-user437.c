#include <stdio.h>
int main(){
 int m;          \\decl without initialization
 int n;           \\decl without initialization
 int i,count=0;    \\decl count with initialization
 scanf("%d",&m);    \\input m
 scanf("%d",&n);     \\input n
 for (i=2; i<n; i++)
 if (n%i==0)          \\[if] cond.
 {count=count+1;}      \\updating count
 if (count=m){          \\[if] cond.
     printf("YES");}
     else {
         printf("NO");}
   return 0; }