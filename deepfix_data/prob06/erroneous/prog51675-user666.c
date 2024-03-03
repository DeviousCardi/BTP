#include <stdio.h>
#include <stdlib.h>
int main() {
	long n,m,x,y;
	scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
	long a[n],b[m];long result[n];for(i=0;i<n;i++){result[i]=-1;}
	long start=0;long count=0;
	for(i=0;i<n;i++) {
	    for(j=start;j<m;j++) {
	        if((a[j]-x)<=b[j]&&(a[j]+y)>=b[j]){result[i]=j;start=j+1;count++;} }
	    if(j>(m-1)){break;} }
	printf("%ld",count);
	return 0; }