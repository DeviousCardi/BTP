#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,arr[500],count[n];
    count[0]=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",arr[i]); }
    for(j=0;j<n;j++) {
        for(i=0;i<n;i++) {
            if(arr[j]==arr[i]) {
                count[j]=count[j]+1; } } }
    for(j=0;j<n;j++) {
        printf("%d",count[j]); }
	return 0; }