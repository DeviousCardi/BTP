#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,v,n,s[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&s[i]); }
	scanf("%d",&v);
    for(i=1;i<n;i++){
        if((s[i]<=v/2)&&(s[n-i-1]=v-s[i])){
        printf("(%d,%d)\n",&s[i],&s[n-i-1]);}break;}
	return 0; }