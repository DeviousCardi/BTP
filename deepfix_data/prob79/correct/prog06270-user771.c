#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i=0,j=0,a=0,b=0;
	int* time;
	scanf("%d",&n);
	time=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++) {
	        scanf("%d",(time+i)); }
	while(a<=n-1-b) {
	      if(a==n-1-b) {
	            a++;
	            break; }
	      else {
	        if(time[a]<time[n-1-b]) {
	                time[n-1-b]=time[n-1-b]-time[a];
	                a++; }
	        else if(time[n-1-b]<time[a]) {
	                time[a]=time[a]-time[n-1-b];
	                b++; }
	        else if(time[a]==time[n-1-b]) {
	                a++;
	                b++; } } }
	printf("%d %d",a,b);
	return 0; }