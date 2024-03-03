#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if (n==1)
    return 1;
    else if (n>=2)
    return (2*((2*(n-2))+1))*cat(n-1)/n; }
int main() {
	int i,n,m,a[100],flag=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
	    scanf ("%d\n",&a[i]); }
    for (i=0;i<n;i++){
        for(m=1;m<18;m++){
            if (cat(m)==a[i]){
                flag=1; } } }
    if(flag==1)
    printf("yes");
    else printf("no");
	return 0; }