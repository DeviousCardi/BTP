#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,arr[n+1],count[n];
    scanf("%d\n",&n);
    for(i=0;i<n+1;i++) {
        scanf("%d",&arr[i]); }
    for(j=0;j<n;j++) {
        for(i=0;i<n;i++) {
            if(arr[j]==arr[i]) {
                count[j]=count[j]+1; } } }
    for(j=0;j<n;j++)
    {   for(i=0;i<n+1;i++) {
            if(count[j]>=count[j+i])
            break; } }
    printf("%d",count[j]);
	return 0; }