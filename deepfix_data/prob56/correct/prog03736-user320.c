#include <stdio.h>
#include <stdlib.h>
double cat(int n)
{   double res;
    int i;
    if(n<=1)
    return 1;
    res=0;
    for(i=0;i<n;i++) {
        res=res+cat(i)*cat(n-i-1); }
    return res; }
int main() {
    int t,a[56346],i;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&a[i]);
        for(i=0;i<10;i++) {
          if (cat(i)>a[i])
          break; }
    printf("%lf",cat(i)); }
	return 0; }