#include <stdio.h>
#include <stdlib.h>
int main() {
	unsigned long size,i,j;
    int cnt1=0,cnt2=0,pos=0;
    scanf("%ld",&size);
    long long int arr[size];
    for(i=0;i<size;i++)
    scanf("%lld",&arr[i]);
    for(i=0;i<size;i++) {
        for(j=i+1;j<size;j++) {
            if(arr[j]==arr[i]) {
                cnt2++;
            }else break; }
        if(cnt2>=cnt1) {
            cnt1=cnt2;
            cnt2=0;
            pos=i; } }
    printf("%lld",arr[pos]);
	return 0; }