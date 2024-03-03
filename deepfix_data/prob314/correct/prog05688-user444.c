#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,t,k,l;
    char ch,new;
    int arr[20];
    int test[20];
		scanf("%d \n", &n);
	i=0;
	while(i<n) {
	    ch=getchar();
	    new=getchar();
	    arr[i]=ch;
	    i=i+1; }
	scanf("%d \n", &t);
	for(j=0;j<t;j++) {
	    ch=getchar();
	    new=getchar();
	    test[j]=ch; }
	for(l=0;l<t;l++) {
	    k=test[l];
	    printf("%d", arr[k]); }
	return 0; }