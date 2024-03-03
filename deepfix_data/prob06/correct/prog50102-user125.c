#include <stdio.h>
#include <stdlib.h>
int main() {
    int m,n,x,y,i,j,a[100],b[100],c[100],count=0;
    scanf("%d",&n);
    scanf(" %d",&m);
    scanf(" %d",&x);
    scanf(" %d",&y);
    for(i=0;i<n;i++)
    {scanf(" %d\n",&a[i]);}
    for(j=0;j<m;j++)
    {scanf(" %d\n",&b[j]);}
    for(i=0;i<n;i++) {
       for(j=0;j<m;j++) {
           if(b[j]-x<=a[i]&&b[j]+y>=a[i])
           count++;
           break; } }
    printf("%d",count+1);
	return 0; }