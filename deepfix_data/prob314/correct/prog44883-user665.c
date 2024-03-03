#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,v[20],b,a;
    scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d\n",&v[i]);
	scanf("%d\n",&b);
	for(i=1;i<=b;i++) {
	  scanf("%d\n",&a);
	if(a==0&&v[a+1]>v[a]) {
	    printf("Yes\n"); }
	else if(v[a+1]>v[a]&&v[a-1]>v[a]){
	printf("Yes\n");}
	else if(a==n-1&&v[a-1]>v[a]) {
	    printf("Yes\n"); }
	else {
	    printf("No\n"); } }
	return 0; }