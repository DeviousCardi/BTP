#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,s[20],t[20],i,j,temp;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",&s[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",&t[i]);
	for(i=0;i<n1;i++) {
	    for(j=i+1;j<(n1-1);j++) {
	        if(s[j]<s[j+1]) {
	            temp=s[j];
	            s[j]=s[j+1];
	            s[j+1]=temp; } }
	    temp=s[n1-1];
	    s[n1-1]=s[i];
	    s[i]=temp; }
    for(i=0;i<n1;i++)
    printf("%d",s[i]);
	return 0; }