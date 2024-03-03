#include <stdio.h>
#include <stdlib.h>
int max(int x,int y){
    if(x>y)
    return x;
    else
    return y; }
int min(int x,int y){
    if(x>y)
    return y;
    else
    return x; }
int main() {
	int n1;
	scanf("%d",&n1);
	int a[n1];
	int n2;
	scanf("%d",&n2);
	int b[n2];
	int i;
	int j;
	int c[max(n1,n2)];
	for(i=0;i<n1;i++){
	    scanf("%d",&a[n1-i]); }
	for(i=0;i<n2;i++){
	    scanf("%d",&b[n2-i]; }
	for(i=0;i<(min(n1,n2));i++){
	    c[i]=a[i]+b[i]; }
	for(i=0;i<(max(n1,n2));i++)
	printf("%d\n",c[i]);
	return 0; }