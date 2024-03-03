#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if(a>b)
    return a;
    else return b; }
int main() {
	int n,i;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++){
	    scanf("%d",&s[i]); }
	int w;
	 for(w=0;w<n;w++){
	int q;
	for(q=0;q<n;q++){
	    int j,m=0;
	    for(j=0;j<n;j++){
	        if(j!=q&&s[j]==s[q]){
	            m++; }
	        s[w]=m; } }
	    int c,h;
	   c= max(s[0],s[1]);
	    for(h=0;h<i;h++){
	    c=max(c,s[i]); }
	printf("%d",c)
	return 0; }