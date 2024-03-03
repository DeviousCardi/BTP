#include <stdio.h>
#include <stdlib.h>
int main() {
	int j[20],i,n;
	scanf("%d",&n);
	for(i=0; i<=n;i++)
        scanf("%d",&j[i]);
        if(j[0]>j[1])
        printf("Yes");
        else
        for(i=1;i<n;i++)
        if((j[i]>j[i-1])&&(j[i]>j[i+1]))
         printf("Yes");
    else
    printf("No");
	return 0; }