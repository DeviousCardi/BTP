#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, m ,n, size;
    scanf("%d",&m);
    scanf("%d",&n);
    if(m>n)
        size=m+1;
    else
        size=n+1;
    int a1[m],a2[n],sum[size];
    for(i=m;i>0;i--) {
            a1[i]=0;
            char ch;
            scanf("%c",&ch);
            a1[i]=(int)(ch -48);
            if(ch=='\n') {
                i++;
                continue; } }
    for(i=n;i>0;i--) {
            a2[i]=0;
            char ch;
            scanf("%c",&ch);
            a2[i]=ch - '0';
            if(ch=='\n') {
                i++;
                continue; } }
    for(i=0;i<size;i++) {
        if(i==0)
            sum[i]=(a1[i]+a2[i])%10;
        else
            sum[i]=(a1[i]+a2[i])%10 +(a1[i-1]+a2[i-1])/10;
        printf("%d",sum[i]); }
	return 0; }