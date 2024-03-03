#include <stdio.h>
int main() {
	int n1,n2,s[19],t[19],a,i;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",&s[i]);
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",&t[i]);
	if(n2<=n1) {
	    for(i=0;i<19;i++) {
	        if(s[i]==t[0])
	        a=i; }
	    for(i=0;i<n2;i++) {
	        if(s[a+i]!=t[i]) {
	            printf("NO");
	            break; } }
	    if(i==n2)
	    printf("YES"); }
	else
	printf("NO");
	return 0; }