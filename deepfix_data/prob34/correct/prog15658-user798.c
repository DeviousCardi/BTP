#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,a,j;
	scanf("%d\n",&n);
	int s[n];
	for(i=0;i<n;i++) {
	        scanf("%d\n",&s[i]); }
	        scanf("%d\n",&t);
	for(j=0;j<t;j++) {
	    scanf("%d\n",&a);
	   if(a==0){
	       if(s[0]<s[1]){
	        printf("Yes\n");
	    }else{printf("No\n");} }
	    else {
	    if((s[a+1+j]>s[a+j])&&(s[a+1+j]>s[a+2+j]))
	    {printf("Yes\n");}
	    else{printf("No\n");} } }
	return 0; }