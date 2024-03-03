#include <stdio.h>
#include <stdlib.h>
void f(int n, int k) {
    int p=1,i;
    for(i=1;i<=n;i++)
    p=p*2;
    p=p-1;
    if(p==k)
    printf("Yes\n");
    else if(p<k)
    f(n+1,k);
    else
    printf("No\n"); }
int main() {
    int a[15],i,l;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    scanf("%d",&a[i]);
    for(i=0;i<l;i++)
    f(a[i],0);
	return 0; }