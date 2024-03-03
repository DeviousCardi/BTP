#include <stdio.h>
int main() {
	int n,a[50],c=0;
	scanf("%d",&n);
	for(int i=0;i<n && c==0;i++){
	    scanf("%d",&a[i]);
	    for(int j=0;j<i && c==0;j++){
	        if(a[j]==a[i]){
	        c++; } } }
	if(c!=0)
	printf("YES");
	else
	printf("NO");
	return 5; }