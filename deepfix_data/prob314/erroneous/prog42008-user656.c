#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t,indx[20],j;
	int s[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&s[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j++){
	    scanf("%d",&indx[j]); }
		if(j==0){
	    printf("Yes");
	    else
	    printf("No");}
	    else if(s[indx[j-1]]<s[indx[j-2]]){
	    printf("Yes");}
	    else if
	    printf("NO");
	    else{
	        if((s[indx[j]]<s[indx[j-1]])&&(s[indx[j]]<s[indx[j+1]])) {
	            printf("Yes"); }
	        else
	        printf("No"); }
	return 0; }