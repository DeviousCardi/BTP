#include <stdio.h>
int main(){
 int m;
 int n;
 int i,count=0;
 scanf("%d",&m);
 scanf("%d",&n);
 for (i=2; i<n; i++)
 if (n%i==0)
 {count=count+1;}
 if (count==m){
     printf("YES");}
     else {
         printf("NO");}
   return 0; }