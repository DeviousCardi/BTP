#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,count=0,sum=0;
    scanf("%d",&n);
    int mat[n],mat2[n];
    for(i=0;i<n;i++) {
        scanf("%d",&mat[i]); }
    if(n==1) {
        count=0;
        printf("%d\n",count);
        printf("%d",count); }
    for(i=0;i<n;i++) {
        count=0;
        for(j=i+1;j<n;j++) {
            if(mat[i]>mat[j]) {
                count=count+1; } }
        mat2[i]=count;
        sum=sum+count; }
    printf("%d\n",sum);
    for(i=0;i<n-1;i++) {
        printf("%d ",mat2[i]); }
    printf("%d",mat2[n-1]);
	return 0; }