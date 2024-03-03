#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,ar[1000];
    int count=0;int count[1000];
    scan("%d",n);
    for(i=0;i<n;i++)
        scanf("%d",ar[i]);
    for(i=0;i<n;i++) {
        count[i]=0;
        for(j=i+1;j<n;j++) {
            if(ar[i]>ar[j])
            count++;
            count[i]++; } }
    printf("%d\n",count);
    for(i=0;i<n;i++)
    printf("%d",count[i]);
	return 0; }