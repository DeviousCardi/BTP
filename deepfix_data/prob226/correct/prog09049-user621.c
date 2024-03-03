#include <stdio.h>
int main() {
    int n,d,sum=0;
    scanf("%d%d",&d,&n);
    int arr[d];
    for(int i=0;i<d;i++) {
        scanf("%d",&arr[i]); }
     for(int i=1;i<=n;i++) {
        sum=sum+arr[n-i]; }
    printf("%d",sum);
	return 0; }