#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, m ,n size;
    scanf("%d",&m);
    scanf("%d",&n);
    if(m>n)
        size=m;
    else
        size=n;
    int a1[m],a2[n],sum[size];
    for(i=0;i<m;i++) {
            char ch;
            scanf("%c",ch);
            a1[i]=ch -'0'; }
    for(i=0;i<n;i++) {
            char ch;
            scanf("c",ch);
            a2[i]=ch - '0'; }
    for(i=0;i<size;i++) {
        sum[i]=(a1[i]+a2[i])%10 +(a1[i-1]+a2[i-1])/10;
        printf("%d",sum[i]); }
	return 0; }