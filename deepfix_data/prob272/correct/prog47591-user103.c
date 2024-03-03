#include <stdio.h>
int main(){
int a1, a2, n, i;
scanf("%d%d%d", &a1, &a2, &n);
int T[n];
T[1]=1, T[2]=2;
for(i=3; i<=n; i++)
   { T[i]=T[i-1]+T[i-2]-2; }
printf("%d", T[n]);
    return 0; }