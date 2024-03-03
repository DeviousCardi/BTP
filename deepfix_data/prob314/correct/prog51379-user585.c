#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,t,n;
	int c[20];
        scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&c[i]); }
    if(c[i+1]>c[i]&&c[i+1]>c[i+2])
         printf("Yes");
    else printf("No");
	return 0; }