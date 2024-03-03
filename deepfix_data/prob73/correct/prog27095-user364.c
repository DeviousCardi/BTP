#include <stdio.h>
int main() {
int n,m,a,i,j,max,sum;
max=0;
sum=0;
scanf("%d%d/n",&n,&m);
for(i=0;i<n;i++){
    for(j=0;j<m;j++){scanf("%d",&a);
    sum=sum+a; }
 if(max<sum){max=sum;}
 scanf("/n");}
 printf("%d",max);
    return 0; }