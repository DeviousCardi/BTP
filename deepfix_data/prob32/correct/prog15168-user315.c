#include <stdio.h>
#include <stdlib.h>
int main() {
	int j,i,n;
	int s[20];
	scanf("%d\n",&n);
	printf("%d\n",n);
	for(i=0;i<n;i++)    {
	    scanf("%d",&s[i]); }
	for(i=0;i<n;i++)    {
	    printf("%d\n", s[i]); }
	if(s[0]<s[1]||s[n-1]<s[n-2])    {
	    printf("Yes"); }
	else{
	    for(j=1;j<n-1;j++)    {
	        if(s[j]<s[j-1]&&s[j]<s[j+1])    {
	            printf("Yes"); }
	        else {printf("No");
	        break;} } }
	return 0; }