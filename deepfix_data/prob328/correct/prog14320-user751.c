#include <stdio.h>
#include <stdlib.h>
int f(int n){
    if(n<=1){return n;}
    else
    return f(n-1)+f(n-2); }
int main() {
	int t,b,j,i;
	scanf("%d\n",&t);
	int a[t][1];
	for(i=0;i<t;i++){
	    scanf("%d",&a[i][0]); }
	for(i=0;i<t;i++){
	    for(j=0;j<20;j++){
	     if(a[i][1]==f(j)){
	         b=1;
	         break; } }
	    if(b==1)
	        printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }