#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&A[i]); }
    int count[n];
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(A[i]>A[j]) {
                count[i]++; } } }
    int countt=0;
    for(int i=0;i<n;i++) {
        countt=countt+count[i]; }
    printf("%d\n",countt);
    for(int i=0;i<n;i++) {
        printf("%d ",count[i]); }
	return 0; }