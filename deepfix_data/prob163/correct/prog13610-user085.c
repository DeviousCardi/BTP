#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int min(int a,int b){
    if(a>b)
    return b;
    else
    return a; }
int main() {
    int n1,n2,num;
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    num=max(n1,n2);
    int i;
    int a1[num+1],a2[num+1],sum[num+1];
    for(i=0;i<num+1;i++) {
        a1[i]=0;
        a2[i]=0;
        sum[i]=0; }
for(i=0;i<num+1;i++) {
        printf("%d",a1[i]); }
	return 0; }