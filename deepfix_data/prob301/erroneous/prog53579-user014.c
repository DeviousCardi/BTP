#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int N,i,lim=pow(10,5)+1;
    scanf("%d",N);
    int a[N]; pos[lim]={},neg[lim]={};
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]);
        if(a[i]>=0)
            pos[a[i]]++;
        else
            neg[-(a[i])]++; }
    for(i=1;i<lim;i++) {
        int max1=pos[0];
        if(pos[i]>pos[i-1])
            max1=i;
        int max2=neg[0];
        if(neg[i]>neg[i-1])
            max2=i; }
    if(max1>max2)
        printf("%d",max1);
    else
        printf("%d",-max2)
	return 0; }