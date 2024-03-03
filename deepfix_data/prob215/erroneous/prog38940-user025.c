#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int count=0;
    int sum=0;
    int arr[10000];
scanf("%d",&n);
for(i=1;i<n;i++){
    if(n%i=0){
        arr[count]=i;
        count=count+1; } }
for(i=0;i<=count;i++){
    sum=sum+arr[i]; }
if(sum==n){
    printf("YES\n");
}else printf("NO\n");
	return 0; }