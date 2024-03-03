#include <stdio.h>
#include <stdlib.h>
int N;
int freq(int b[],int n);
int main() {
    int mode=0;
    int max=0;
    int i=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    max=freq(a,a[0]);
    mode=a[0];
    for(i=1;i<n;i++) {
        if(max<=freq(a,a[i])) {
            max=freq (a,a[i]);
            mode=a[i]; } }
    printf("%d",mode);
	return 0; }
int freq(int b[],int n)
{   int i;
    int c=0;
    for(i=0;i<N;i++) {
        if(n==b[i]) {
            c++; } }
    return c; }