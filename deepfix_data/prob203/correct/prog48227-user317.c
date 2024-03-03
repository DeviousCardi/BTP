#include <stdio.h>
int main() {
	int n,a[50],c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    for(int j=0;j<i;j++){
	        if(a[j]==a[i]){
	        c++;
	        break; } } }
	if(c!=0)
	printf("YES");
	else
	printf("NO");
	return 0; }