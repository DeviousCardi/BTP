#include <stdio.h>
int main(){
 int i, n, a1, a2, T[n];
 scanf("%d %d %d", &a1, &a2, &n);
 T[1]= a1;
 T[2]= a2;
 for(i=3; i<=n; i++)
 {T[n]=T[n-1]+T[n-2]-2;
 printf("%d", T[n]); }
     return 0; }