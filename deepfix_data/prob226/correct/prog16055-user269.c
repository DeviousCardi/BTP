#include <stdio.h>
int main()
{ int N,d,i,sum=0;
scanf("%d %d",&d,&N);
int arr[d],a[d];
for(i=0;i<d;i++) {
    scanf("%d",&arr[i]); }
for(i=0;i<N;i++) {
    sum=sum+arr[i]; }
printf("%d",sum);
	return 0; }