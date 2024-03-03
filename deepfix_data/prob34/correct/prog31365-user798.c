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
	    if(t=1){
	        printf("Yes\n"); }
	  if(a==0) {
	      if(s[0]<s[1])
	      printf("No\n");
	  else
	  printf("Yes\n"); }
	   if(a==n-1) {
	      if(s[n-1]<s[n-2])
	      {printf("No\n");}
	  else
	  {printf("Yes\n");} }
	 if((a!=0)&&(a!=n-1)){
	  if((s[a]>s[a-1])&&(s[a]>s[a+1]))
	    {printf("Yes\n");}
	    else{printf("No\n");} } }
	return 0; }