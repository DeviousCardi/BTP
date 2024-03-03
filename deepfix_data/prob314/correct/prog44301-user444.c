#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,t,k,l;
    char ch,new;
    int arr[20];
    int test[20];
		scanf("%d", &n);
		scanf("\n");
	ch=getchar();
	i=0;
	while(i<n && ch!=EOF && ch!='\n') {
	    arr[i]=ch;
	    ch=getchar();
	    i++; }
	scanf("%d", &t);
	scanf("\n");
	i=0;
    while(i<t && ch!=EOF && ch!='\n') {
	    test[i]=ch;
	    ch=getchar();
	    i++; }
	for(i=0;i<n;i++) {
	    putchar(arr[k]); }
	return 0; }