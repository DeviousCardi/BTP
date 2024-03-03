#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,a[20],i,j,c,m,b[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++) {
        if(a[j]>a[i]) {
            c=a[i];
            a[i]=a[j];
            a[j]=c; } }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++)
        if(b[j]==a[i])
        break;
        if(j==m)
        break; }
    if(i<n)
    printf("%d",a[i]);
    if(i==n)
    printf("NO");
	return 0; }