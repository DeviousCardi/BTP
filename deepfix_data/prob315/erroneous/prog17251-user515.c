#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,count1,count2;
    count1=0;
    scanf("%d\n",&n);
    int A[n],B[1000];
    for(int i=0;i<n;i++) {
        scanf("%d ",&A[i]); }
    for(int j=0;j<n;j++) {
        count2=0;
        for(int k=j+1;k<(n-1);k++) {
            if((A[j]>B[k])&&(i<j)) {
                count2++;
                count1++; } }
        B[j]=count2; }
    printf("%d\n",count1);
    for(int l=0;l<n;l++) {
        printf("%d ",B[l]); }
	return 0; }