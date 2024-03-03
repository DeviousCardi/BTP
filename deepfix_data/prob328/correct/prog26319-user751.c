#include <stdio.h>
#include <stdlib.h>
int f(int n){
    if(n<=1){return n;}
    else
    return f(n-1)+f(n-2); }
int main() {
	int t,b=0,j,i;
	scanf("%d\n",&t);
	int a[100][1];
	for(i=0;i<t;i++){
	    scanf("%d",&a[i][0]); }
	for(i=0;i<t;i++){
	    for(j=0;j<20;j++){
	     if(a[i][0]==f(j)){
	         b=1;
	         break; } }
	    if(b==1){
	        printf("yes\n");}
	    else if(b==0){
	    printf("no\n");} }
	return 0; }