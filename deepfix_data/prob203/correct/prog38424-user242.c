#include <stdio.h>
int main() {
	int a,n,array[50],flag=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    scanf("%d",&a);
	    array[i]=a; }
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){
	        if(array[i]==array[j]) flag=flag+1; } }
	if(flag>0) printf("YES");
	else printf("NO");
	return 0; }