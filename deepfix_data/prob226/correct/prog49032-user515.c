#include <stdio.h>
int calc(int n);
int b[20],d;
int main() {
    int N,a[31],i;
    scanf("%d %d\n",&d,&N);
    for(i=0;i<d;i++) {
        scanf("%d ",&b[i]);
        a[i]=b[i]; }
	a[N]=calc(N);
	return 0; }
int calc(int n) {
    int temp;
    if(n<=d)
        temp=b[n];
    else {
        for(int i=1;i<=d;i++) {
            temp+=calc(n-i); } }
    return temp; }