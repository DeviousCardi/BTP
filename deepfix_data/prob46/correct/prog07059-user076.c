#include <stdio.h>
int main(){
 int n,m,i;
 scanf("%d%d",&m,&n);
 if(n%m==0) {
     for(i=2;i<m;i=i+1) {
         if(m%i==0) {
             printf("YES");
             break; }
         printf("NO"); } }
 else
   printf("NO");
    return 0; }