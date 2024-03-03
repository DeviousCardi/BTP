#include <stdio.h>
int main(){
 int i=1, n, a1, a2;
 int T[i];
 scanf("%d %d %d", &n, &a1, &a2);
 T[1]=a1;
 T[2]=a2;
 while(i>2 && i<=n)
 {T[i]=T[i-1]+T[i-2]-2;
 ++i; }
 printf("%d", T[n]);
     return 0; }