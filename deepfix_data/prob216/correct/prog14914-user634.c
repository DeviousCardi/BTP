#include <stdio.h>
#include <stdlib.h>
int fibo(int k,int a,int b) {
    if(k==1)
    return a;
    return fibo(k-1,b,(a+b)); }
int main() {
    int t,i;
    scanf("%d",&t);
    if(t<=0) {
        printf("invalid");
        return 0; }
    int a[t];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t;i++) {
        if(a[i]<=0) {
            printf("invalid\n");
            continue; }
        if(a[i]==1) {
            printf("0\n");
            continue; }
        else if(a[i]==2) {
            printf("1\n");
            continue; }
        printf("%d\n",fibo(a[i],0,1)); }
	return 0; }