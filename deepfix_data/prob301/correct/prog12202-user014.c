#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n,i,lim=pow(10,5)+1;
    scanf("%d",&n);
    int a[n], pos[100001]={},neg[100001]={};
    int max1=0, max2=0;
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
        if(pos[i]>max1)
            max1=i;
        if(neg[i]>max2)
            max2=i; }
    if(max1>max2)
        printf("%d",max1);
    else
        printf("%d",-max2);
	return 0; }