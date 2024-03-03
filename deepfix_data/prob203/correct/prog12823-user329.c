#include <stdio.h>
int main() {
	int n,i,arr[55],flag=0;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
	        scanf("%d", &arr[i]); }
	for(i=0; i<n; i++) {
	        for(int j=i; j<n; j++) {
	                if(arr[i]==arr[j]) {
	                        flag=1;
	                        break; } } }
	if(flag==1)
	    printf("YES");
	else
	    printf("NO");
	return 0; }