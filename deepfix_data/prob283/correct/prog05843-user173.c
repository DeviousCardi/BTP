#include <stdio.h>
#include <stdlib.h>
int A(int m, int n) {
    if(m==0)
        return n+1;
    else if(m>0 && n==0)
        return A(m-1,1);
    else if(m>0 && n>0)
        return A(m-1,A(m,n-1));
    else return -1; }
int main() {
	int k,i,j,flag=0;
	scanf("%d\n",&k);
	for(i=0;i<=3 && flag==0;i++) {
	    for(j=0;j<=5;j++)
	        if(k==A(i,j))
	        {   printf("%d %d",i,j);
	            flag=1;
	            break; } }
	if(flag==0)
	    printf("-1");
	return 0; }