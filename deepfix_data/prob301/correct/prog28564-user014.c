#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n,i,lim=pow(10,5)+1;
    scanf("%d",&n);
    int a[n], pos[100001]={},neg[100001]={};
    int max1, max2;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]=='\n')
            i--;
        if(a[i]>=0)
            pos[a[i]]++;
        else
            neg[-(a[i])]++;
        printf("%d",a[i]); }
    for(i=1;i<lim;i++) {
        max1=pos[0];
        if(pos[i]>pos[i-1])
            max1=i;
        max2=neg[0];
        if(neg[i]>neg[i-1])
            max2=i; }
    if(max1>max2)
        printf("%d",max1);
    else
        printf("%d",-max2);
	return 0; }