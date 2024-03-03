#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,arr[n],count[n];
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d\n",&arr[i]); }
    for(j=0;j<n;j++) {
        for(i=0;i<n;i++) {
            if(arr[j]==arr[i]) {
                count[j]=count[j]+1; } } }
    for(j=0;j<n;j++) {
        for(i=0;i<n;i++)
        if(count[j]>count[j+i])
        break; }
    printf("%d",count[j]-1);
	return 0; }