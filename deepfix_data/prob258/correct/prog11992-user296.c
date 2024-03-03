#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int a,n;
    int s[n];
    int i=1,m;
    scanf("%d",&n);
    scanf("%d",&a);
    s[i]=a;
    while(i<n) {
       m=max(s[i],s[i-1]);
        i=i+1; }
    printf("%d",m);
	return 0; }