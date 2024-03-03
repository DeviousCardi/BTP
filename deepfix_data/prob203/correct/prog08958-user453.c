#include <stdio.h>
int main() {
	int n;
	int a[50];
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int flag=1;
	for(int i=0;i<n;i++) {
	    for(int j=i+1;j<n;j++) {
	        if(a[i]==a[j]) {
	            printf("YES");
	            flag=0;
	            break; } }
	    if(flag==0)
	    break;
	    if(i==n-2)
	    printf("NO"); }
	return 0; }