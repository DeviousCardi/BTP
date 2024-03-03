#include <stdio.h>
#include <stdlib.h>
int main() {
    long long int N;
    scanf("%lld\n",&N);
    long long int a[N];
    int i;
    for(i=0;i<N;i++)
    scanf("%lld\n",&a[i]);
    long long int S;
    scanf("%lld\n",&S);
    int m,n;
    for(m=0;m<N;m++) {
        for(n=0;n<N;n++) {
        if(S-a[m]==a[n])
        printf("(%d,%d)",a[m],a[n]);
        else
        continue; } }
		return 0; }