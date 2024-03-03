#include <stdio.h>
int main() {
    int n,d,sum=0;
    scanf("%d%d",&d,&n);
    int arr[d],arr2[d];
    for(int i=0;i<d;i++) {
        scanf("%d",&arr[i]); }
    for(int i=0;i<d;i++) {
        sum=sum+arr[i];
        arr2[i]=sum; }
    for(int i=1;i<=d;i++) {
        sum=sum+arr2[n-i]; }
    printf("%d",);
	return 0; }