#include <stdio.h>
#include<math.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int a,n;
    int s[20];
    int i=1,m;
    scanf("%d",&a);
    while(i<n) {
        s[i]=a;
       m=max(s[i],s[i-1]);
        i=i+1;
        scanf("%d",&a); }
    printf("%d",m);
	return 0; }