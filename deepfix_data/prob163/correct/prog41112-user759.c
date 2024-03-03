#include <stdio.h>
#include <stdlib.h>
int main() {
    int s1,s2,i,max,min,num1[500],num2[500],sum[501];
    char one[500], two[500];
    scanf(" %d %d ", &s1, &s2);
    for(i=s1-1;i--;) {
        scanf("%c", &one[i]);
        num1[i]=one[i] - 48; }
    scanf("\n");
    for(i=s2-1;i--;) {
        scanf("%c", &two[i]);
        num2[i]=two[i] - 48; }
    min=(s1<s2)? s1:s2;
    max=s1 + s2 - min;
    if(min==s2)
        for(i=s1-1;i>s2;i--)
            sum[i]=num1[i];
    else
        for(i=s2;i>s1;i--)
            sum[i]=num2[i];
    for(i=min;i--;)
        sum[i]=num1[i]+num2[i];
    sum[max]=0;
    for(i=1;i<=max;i++) {
        sum[i]+=sum[i-1]/10;
        sum[i-1]%=10; }
    for(i=max;i--;)
        printf("%d",sum[i]);
	return 0; }