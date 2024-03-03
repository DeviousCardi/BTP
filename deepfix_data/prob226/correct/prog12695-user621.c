#include <stdio.h>
int main() {
    int n,d,sum=0;
    scanf("%d%d",&d,&n);
    int arr[d],arr2[d];
    for(int i=0;i<d;i++) {
        scanf("%d",&arr[i]); }
    for(int j=0;j<d;j++) {
    for(int i=j;i<=d;i++) {
        sum=sum+arr[d-i]; }
    arr2[j]=sum; }
    for(int i=1;i<=d;i++) {
        sum=sum+arr2[d-i]; }
    printf("%d",sum);
	return 0; }