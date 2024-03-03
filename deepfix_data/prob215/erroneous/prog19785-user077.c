#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d", &n);
	int i;
	int s=0;
	for (i=1;i*i<=n;i++) {
	        if (n%i==0)
	            s=s+i; }
	if (s==n)
	    printf("YES");
	else printf("NO");
	return 0; }
int n;
 global int a[n];
void prime(a[],n)   {
    a[0]=0;
    a[1]=1;
    int i,j;
    for (i=2;i*i<=n;i++)
        a[i]=1;
    for (i=2;i*i<=n;i++)    {
        if (a[i]==1)    {
            for (j=i*i;j<=n;j=j+i)
                a[j]=0; } } }