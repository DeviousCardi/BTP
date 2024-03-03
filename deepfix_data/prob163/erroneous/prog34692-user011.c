#include <stdio.h>
#include <stdlib.h>
int min(int a,int b) {
    if(a>b)
    return b;
    else
    return a; }
int main() {
int size1,size2;
int num1[500],num2[500];
int add[501];
scanf("%d%d",&size1,&size2);
for(i=0;i<size1;i++) {
    int ch=getchar();
    num1[i]=ch;
    if(ch=='\n'||ch==' '||ch=='\t') {
        num1[i]=getchar(); } }
for(i=0;i<size2;i++) {
    int ch=getchar();
    num2[i]=ch;
    if(ch==' '||ch=='\t') {
        num2[i]=getchar(); } }
size=min(size1,size2);
int carry=0;
for(i=0;i<size+1;i++) {
    add[i]=carry+(num1[i]+num2[i])%10;
        if(num1[i]+num2[i]>=10) {
        carry=(num1[i]+num2[i])/10; }
    else
    {carry=0;} }
	return 0; }