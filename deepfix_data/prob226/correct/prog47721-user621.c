#include <stdio.h>
int main() {
    int n,d,sum=0;
    scanf("%d%d",&n,&d);
    int arr[d];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
for(int i=0;i<d;i++) {
    printf("%d ",arr[i]); }
	return 0; }