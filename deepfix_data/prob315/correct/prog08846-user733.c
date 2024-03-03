#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,count=0,total=0;
    scanf("%d",&n);
    int ar[n],a2[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]);
        a2[i]=0; }
    for(i=0;i<n-1;i++) {
        count=0;
        for(j=i+1;j<n;j++) {
            if(ar[i]>ar[j])
            count++;
            total++; }
        a2[i]=count; }
    printf("%d\n",total);
    for(i=0;i<n;i++)
    printf("%d ",a2[i]);
	return 0; }