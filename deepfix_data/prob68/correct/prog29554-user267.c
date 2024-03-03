#include<stdio.h>
int main() {
int N,i;
scanf("%d",&N);
int a[N];
for(i=0;i<N;i++)
 scanf("%d",&a[i]);
 int prd=1;
   for(i=0;i<N;i++)
    prd=prd*a[i];
    printf("%d",prd);
    return 0; }