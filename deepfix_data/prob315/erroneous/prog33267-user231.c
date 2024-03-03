#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int i=0;
	int a,b,c,e;
	int d=0;
	scanf("%d",&n);
	int s[n];
	int r[n];
	do{
	    scanf("%d",&s[i]);
	    i++; }
	while(i<n);
	for(a=0;a<n;a++){
	    int count=0;
	        for(b=a+1;b<n;b++){
	            if(s[b]<s[a]){
	            count++; } }
	    r[a]=count; } }
	for(c=0;c<n;c++){
	    d=d+r[c]; }
	printf("%d\n",d);
	for(e=0;e<n;e++){
	    printf("%d ",r[e]); }
	return 0; }