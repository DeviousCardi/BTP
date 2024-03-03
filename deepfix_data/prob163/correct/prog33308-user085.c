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
int ch=getchar();
for(i=num+1-n1;i<num+1;i++) {
    a1[i]=ch-48;
    ch=getchar(); }
char d;
scanf("%c",&d);
for(i=num+1-n1;i<num+1;i++) {
    a2[i]=ch-48;
    ch=getchar(); }
for(i=num+1-n1;i<num+1;i++) {
    printf("%d",a1[i]); }
	return 0; }