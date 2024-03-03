#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,sum,elemnt[10000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
    { scanf("%d",&elemnt[i]);}
    printf("\n");
    scanf("%d",&sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((elemnt[i]+elemnt[j])==sum){
                printf("(%d,%d)",elemnt[i],elemnt[j];)}
            else {continue;} } }
	return 0; }