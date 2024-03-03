#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int main() {
int n1,n2,num;
scanf("%d\n",&n1);
scanf("%d\n",&n2);
num=max(n1,n2);
char a1[num+1],a2[num+1];
int i,j;
char d;
for(i=num-n1+1;i<num+1;i++) {
   scanf("%c",&a1[i]); }
scanf("%c",&d);
for(i=num-n2+1;i<num+1;i++) {
   scanf("%c",&a2[i]); }
for(i=num-n1+1;i<num+1;i++) {
    printf("%c",a1[i]); }
for(i=num-n2+1;i<num+1;i++) {
    printf("%c",a2[i]); }
	return 0; }