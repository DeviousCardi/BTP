#include <stdio.h>
#include <stdlib.h>
	int check(int x,int n)
	{   if(x==1)
        return 1;
	    else if(x<0)
	    return 0;
	    else if((n-1)>x)
	    return 0;
	    else if((n-1)==x)
	    return 1;
	    else if(x==0)
	    return 1;
	    else
	    return check(x,2*n); }
int main() {
    int j,i,a[1000],t,n=2;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    scanf("%d",&a[j]);
    for(j=0;j<t;j++) {
        i=check(a[j],n);
        if(i==1)
        printf("yes\n");
        else printf("no\n"); }
	return 0; }