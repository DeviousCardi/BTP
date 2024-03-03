#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++) {
	scanf("%d",&s[i]);
    if((s[i]==' ')||(s[i]=='\n'))
    {i=i-1;
    continue;}}
	for(i=0;i<n;i++) {
	if(((s[i]>s[i+1])&&(s[i]>s[i-1]))||(s[n-1]>s[n-2])){
	    printf("Yes");
	    break;} }
	if(i==n)
	printf("No");
	return 0; }