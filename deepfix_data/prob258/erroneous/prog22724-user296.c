#include <stdio.h>
int max(s[int a],s[int b]) {
    if(s[a]>s[b])
    return s[a];
    else
    return s[b]; }
int main() {
    int a;
    int char s[n];
    int i=1;
    scanf("%d%d",&n,&a);
    while(a!=eof&&i<n) {
        s[i]=a;
        m=max(s[i],s[i-1]);
        i=i+1;
        scanf("%d",&a); }
    printf("%d",m);
	return 0; }