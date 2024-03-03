#include <stdio.h>
int main() {
	int i,j,s[50],n,y=1;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&s[i]);
	    for(j=0;j<i;j++) {
	        if(s[i]==s[j]) {
	            printf("YES");
	            y=0;
	            break; }
	        if(y==0)
	        break; } }
	    if(i==n&&y==0)
	    printf("NO");
	return 0; }