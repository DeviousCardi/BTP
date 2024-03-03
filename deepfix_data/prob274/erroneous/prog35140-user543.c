#include <stdio.h>
int main(){
int i,n,j,t,k;
scanf("%d\n",&n);
int r[n];
for(i=1;i<=n;i++)
{ scanf("%d",&r[i]); }
i=r[1];
 while(i!=1&&j!=1)
{ j=r[i];
i=r[j];
    t++; }
i=r[1];
    do {
    j=r[i];
    i=r[j];
    k++;
    } while((i!=r[1])&&(j!=r[1]))
printf("%d %d",t,k);
    return 0; }