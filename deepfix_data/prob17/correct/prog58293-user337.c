#include <stdio.h>
int main() {
    int n,i,j;
        scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++) {
    scanf("%d",&A[i]); }
    int m,count=0;
    scanf("%d",&m);
    int B[m];
    for (j=0;j<m;j++) {
        scanf("%d",&B[j]); }
    for(j=0;j<m;j++) {
        for(i=0;i<n;i++) {
            if(B[j]==A[i]) {
                int k;
            for(k=1;k<m;k++) {
                if(B[k]==A[k]) {
                    count++; } } }
            else
            { break;
                 printf("NO"); } } }
    if (count==m-1) {
        printf("YES"); }
	return 0; }