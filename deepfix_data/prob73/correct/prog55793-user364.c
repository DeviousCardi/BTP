#include <stdio.h>
int main() {
int k,m,a,i,j,max,sum;
max=0;
sum=0;
scanf("%d%d/n",&k,&m);
    for(i=0;i<k;i++){
    for(j=0;j<m;j++){scanf("%d",&a);
    sum=sum+a; }
 if(max<sum){max=sum;}
  sum=0;
 scanf("/n");}
 printf("%d",max);
    return 0; }