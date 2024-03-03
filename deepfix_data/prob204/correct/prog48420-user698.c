#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int A[100];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }int t=0;
    for(i=0;i<n;i++){
        if(A[i]!=A[n-i-1])
        t++; }
    if(t>0)
     printf("NO");
     else printf("YES");
	return 0; }