#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int a,n;
    int s[n];
    int i=1,m,j;
    scanf("%d\n",&n);
    scanf("%d\n",&a);
    s[i]=a;
    while(i<n) {
        m=max(s[i],s[i-1]);
        i=i+1;
        scanf("%d",&s[i]); }
    s[j]=m;
    printf("%d",j);
	return 0; }