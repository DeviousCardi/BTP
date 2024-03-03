#include <stdio.h>
#include <stdlib.h>
int main() {
 long long int n,i;
  long long int count=0;
  long long int sum=0;
  long long int arr[100000000];
scanf("%lld",&n);
for(i=1;i<n;i++) {
    if(n%i==0) {
        arr[count]=i;
        count=count+1; } }
for(i=0;i<=count;i++) {
    sum=sum+arr[i]; }
if(sum==n) {
    printf("YES\n");
}else printf("NO\n");
	return 0; }