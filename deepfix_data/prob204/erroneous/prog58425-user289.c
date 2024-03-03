#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,x,i,j,b,count=0;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<100;i++) {
	    b=(n/pow(10,i));
	    x=b%10;
	    if(x!=0)
	    {a[i]=x;
	     count=count+1 }
	    else {break;} }
	for(j=0;j<=i;j++) {
	    if(a[j]==a[i-j])
	    {count=count+1;} }
	    if(count==i)
	    {printf("YES");}
	    else
	    {printf("NO");}
	return 0; }