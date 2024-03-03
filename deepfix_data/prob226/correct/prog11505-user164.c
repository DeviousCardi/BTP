#include <stdio.h>
int main() {
    int N,d;
    int arr[31];
    int j,t,cnt;
    scanf("%d %d",&d,&N);
    for(j=0;j<d;j++)
    scanf("%d",&arr[j]);
    if(N<=d)
    printf("%d",arr[N]);
    else if(N>d) {
        	for(j=0;j<N-d;j++) {
	             for(cnt=1;cnt<=d;cnt++) {
	               t=t+arr[j+d-cnt]; }
	             arr[j+d]=t; }
	        printf("%d",arr[N]); }
	return 0; }