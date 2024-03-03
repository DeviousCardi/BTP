#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a=0,b=0,*t,i,j,time_a=0,time_b=0;
	scanf("%d",&n);
	t=malloc(n*sizeof(int));
	for(i=0;i<n;i++) {
	    scanf("%d",(t+i)); }
	i=0;
	j=n-1;
	while(i<=j) {
	    time_a+=*(t+i);
	    time_b+=*(t+j);
	    if(time_a<time_b) {
	        a++;
	        i++;
	        time_b-=*(t+j); }
	    else {
	        b++;
	        j--;
	        time_a-=*(t+i); } }
	printf("%d %d",a,b);
	return 0; }