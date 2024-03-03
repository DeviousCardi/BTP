#include <stdio.h>
int main() {
    int N,d;
    int arr[31];
    int j,t=0,cnt;
    scanf("%d %d",&d,&N);
    for(j=0;j<d;j++)
    scanf("%d",&arr[j]);
    if(N<=(d-1))
    printf("%d",arr[N]);
    else {
        	for(j=0;j<N-d;j++) {
	             for(cnt=1;cnt<=d;cnt++) {
	               t=t+arr[j+d-cnt]; }
	             arr[j+d]=t;
	             printf("%d ",t); }
	        printf("%d",arr[N]); }
	return 0; }