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
int a1[num+1],a2[num+1],sum[num+1];
int i;
for(i=0;i<num+1;i++)
{a1[i]=0;
    a2[i]=0;
    sum[i]=0; }
int a1,a2;
scanf("%d",%a1);
scanf("%d",%a2);
for(i=num;i>=num+1-n1;i--) {
    a1[i]=a1%10;
    a1=a1/10; }
for(i=num;i>=num+1-n2;i--) {
    a2[i]=a2%10;
    a2=a2/10; }
for(i=num+1-n1;i<num+1;i++) {
    printf("%d",a1[i]) }
	return 0; }