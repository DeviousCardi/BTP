#include <stdio.h>
int main() {
    int i,N,j,k;
	scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
    for(j=0;j<N;j++) {
        for(k=j+1;k<N;k++) {
            if(arr[k]==arr[j]) {
                printf("YES\n"); }
            else {
                printf("NO\n"); } } }
	return 0; }