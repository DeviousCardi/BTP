#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]); }
            for (j=1;j<n;j++){
            if ((array[j]<array[j-1])&&(array[j]<array[j+1])){
                printf("Yes"); }
            else if (array[0]<array[1]){
                printf("Yes");break; }
            else printf("No"); }
	return 0; }