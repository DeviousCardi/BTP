#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,i,c=0,t=-1,s;
    scanf("%d",n1);
    scanf("%d",n2);
    int num1[500],num2[500],sum[501];
    char ch;
    for(i=0;i<n1;++i) {
            scanf("%c",&ch);
            num1[i]=ch-'0'; }
    for(i=0;i<n2;++i) {
            scanf("%c",&ch);
            num2[i]=ch-'0'; }
    int t1=n1;
    int t2=n2;
    if(n1>n2) {
        for(i=n1-1,j=n2-1;i>=0,j>=0;--i,--j) {
             t=num1[i]+num2[j];
             if(t+c>9) {
                    sum[i]=t%10+c;
                    c=t/10; } } }
    if(n2>n1) {
        for(i=n1-1,j=n2-1;i>=0,j>=0;--i,--j) {
             t=num1[i]+num2[j];
             if(t+c>9) {
                    sum[i]=t%10+c;
                    c=t/10; } } }
	return 0; }