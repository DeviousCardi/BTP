#include <stdio.h>
int main()
{ int n,m,sum1=0,sum2=0,i,j ,a[m],b[m];
scanf("%d%d\n",&n,&m);
for(i=0;i<m;i++){
    scanf("%d",&a[i]);
    sum1=sum1+a[i]; }
for(j=0;j<m;j++){
    scanf("%d",&b[i]);
    sum2=sum2+b[i]; }
    if(sum1<sum2){
        printf("%d",sum2); }
    else{ printf("%d",sum1);}
    return 0; }