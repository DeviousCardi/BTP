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
int ch=getchar();
for(i=num-n1+1;i<num+1;i++) {
    a1[i]=ch;
    ch=getchar(); }
scanf("%c\n");
for(i=num-n2+1;i<num+1;i++) {
    a2[i]=ch;
    ch=getchar(); }
for(i=num-n1+1;i<num+1;i++) {
    putchar(a1[i]); }
for(i=num-n2+1;i<num+1;i++) {
    putchar(a2[i]); }
	return 0; }