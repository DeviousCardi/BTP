#include <stdio.h>
#include <stdlib.h>
	int check(int x,int n) {
	    if(n-1>x)
	    return 0;
	    else if(n-1==x)
	    return 1;
	    else if(x==0)
	    return 1;
	    else{
	        return check(x,2*n); } }
int main() {
    int j,i=0,a[1000],t,n=2;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    scanf("%d",&a[i]);
    for(j=0;j<t;j++) {
        i=check(a[i],n);
        if(i)
        printf("yes\n");
        else printf("no\n"); }
	return 0; }