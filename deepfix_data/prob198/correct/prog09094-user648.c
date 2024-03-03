#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,s[20],t[20],i,temp;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",&s[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",&t[i]);
	for(i=1;i<n1;i++) {
	    if(s[i]>s[i-1]) {
	        temp=s[i];
	        s[i]=s[i-1];
	        s[i-1]=temp; } }
    for(i=0;i<n2;i++) {
        if(t[i]==s[n1-1])
        printf("%d",t[i]);
        else if(i==n2-1&&t[i]!=s[n1-1])
        printf("NO"); }
	return 0; }