#include <stdio.h>
#include <stdlib.h>
int max(int x,int y){
    if (x>y)
    return x;
    else if (y>x)
    return y; }
int main() {
	int a[500],b[500],i,n1,n2,c[501];
	scanf("%d %d",&n1,&n2);
	for (i=0;i<n1;i++){
	    scanf ("%d",&a[i]); }
	for (i=0;i<n2;i++){
	    scanf("%d",&b[i]); }
	 for(i=0;i<3;i++){
	     c[i]=a[n1-i-1]+b[n2-1-i]; }
	 printf ("%d",c[i]);
	return 0; }