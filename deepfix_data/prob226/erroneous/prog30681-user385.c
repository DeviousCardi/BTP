#include <stdio.h>
int main() {
    int a[20],b[20];
    int n,m,i,j,s;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++)
    {   s=0;
        for(j=0;j<=i;j++) {
            s=s+a[j]; }
        b[i]= }
	return 0; }