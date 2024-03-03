#include <stdio.h>
#include <stdlib.h>
int main() {
	int j[20],i,n;
	scanf("%d",&n);
	for(i=0; i<n;i++){
        scanf("%d",&j[i]); }
        for(i=1;i<n;i++){
        if(j[0]>j[1]) {
        printf("Yes");
        break; }
        if(i!=n-1) {
        if((j[i]>j[i-1])&&(j[i]>j[i+1]))
         printf("Yes"); } }
        if(n==1)
        printf("Yes");
        else if(i==n)
        printf("No");
	return 0; }