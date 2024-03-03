#include <stdio.h>
int main() {
	int n1,n2,i,t,d,j;
	int s1[50],s2[50];
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&s1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&s2[i]); }
	for(i=0;i<n1;i++)
	{t=i;
	    if(s1[i]==s2[0])
	    {d=0;
	        for(j=0;j<n2;j++) {
	            if(s2[j]==s1[i]) {
	                d=d+1;
	                i++; } } }
	    if(d==n2) {
	       printf("YES");
	       break; }
	    i=t; }
	if(d!=n2) {
	    printf("NO"); }
	return 0; }