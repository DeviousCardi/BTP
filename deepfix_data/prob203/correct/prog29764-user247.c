#include <stdio.h>
int main() {
	int x[50],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&x[i]); }
	for(i=0;i<n;i++){
	    for (j=0;j<n;j++){
	        if (x[i]!=x[j])
	        {printf("NO");}
	        else{printf("YES");} } }
	return 0; }