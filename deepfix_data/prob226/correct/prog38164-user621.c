#include <stdio.h>
int main() {
    int n,d,sum=0;
    scanf("%d%d",&n,&d);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(int i=1;i<=n;i++) {
        sum=sum+arr[d-i]; }
    printf("%d",sum);
	return 0; }