#include <stdio.h>
#include <stdlib.h>
	int check(int x,int n) {
	    if (x>500000)
	    return 0;
	    else if((n-1)>x && x!=0)
	    return 0;
	    else if(x==0)
	    return 1;
	    else {
	        if((n-1)==x)
	        return 1;
	        else return check(x,n*2); } }
int main() {
    int i,j,t,a[1000];
scanf("%d",&t);
for(i=0;i<t;i++)
scanf("%d",&a[i]);
int n=2;
for(i=0;i<t;i++) {
    j=check(a[i],n);
    if(j)
    printf("yes\n");
    else printf("no\n"); }
	return 0; }