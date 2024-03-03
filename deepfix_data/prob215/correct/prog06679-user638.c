#include <stdio.h>
int check(long a);
int main() {
    long x;
    scanf("%ld",&x);
    if(check(x))
    printf("YES");
    else
    printf("NO");
	return 0; }
int check(long a) {
    long i,s=1;
    for(i=2;i<=a/2;i++) {
        if(a%i==0)
        s=s+i; }
    if(s==a)
    return 1;
    else
    return 0; }