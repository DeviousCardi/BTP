#include <stdio.h>
#include <stdlib.h>
int main() {
	int A[1000], B[1000];
	int n, m,a;
	scanf("%d\n", &n);
	a=0;
    for(int i=0;i<n;i++){
        scanf("%d", &A[i]); }
    for(int i=0;i<n;i++){
        m=0;
        for(int j=j+1;j<n;j++){
            if(A[i]>A[j]){
                m=m+1; } }
        B[i]=m
        a=a+m; }
    printf("%d\n", a);
    for(int i=0;i<n;i++){
        printf("%d ", B[i]); }
	return 0; }