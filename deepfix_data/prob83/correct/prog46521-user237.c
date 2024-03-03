#include <stdio.h>
int main() {
 int n,d,i;
 scanf("%d",&n);
 int jo[n],mo[n];
 for(i=0;i<n;i++)
 scanf("%d",&jo[i]);
 scanf("%d",&d);
 for(i=0;i<n;i++) {
     mo[(i+d)%n]=jo[i]; }
 for(i=0;i<n;i++)
 printf("%d ",mo[i]);
    return 0; }