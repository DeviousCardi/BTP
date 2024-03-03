#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t,c[20],j;
	int s[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&s[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j++){
	    scanf("%d",&c[j]);}
	    for(j=0;j<=t;j++){
	   if(j==0||j==t){
	       if(s[0]<s[1]||s[t]<s[t-1]){
	           printf("Yes\n"); }
	       else
	       printf("No\n"); }
	   else{
	if(s[c[j-1]]<s[c[j-2]]&&s[c[j-1]]<s[c[j]]){
	    printf("Yes\n"); }
	     else
         printf("No\n"); } }
	return 0; }