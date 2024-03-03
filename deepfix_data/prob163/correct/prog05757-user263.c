#include <stdio.h>
#include <stdlib.h>
int main() {
    int s1;
    int s2;
    int max;
    char ch,ch1;
    int p,q,t,i,k,carry;
    scanf("%d%d",&s1,&s2);
    char a[s1];
    char b[s2];
    int c[500];
    i=0;
    ch=getchar();
    while(ch!='\n') {
        a[i++]=ch;
        ch=getchar(); }
    for(i=0;i<s1;i++) {
        printf("%c",a[i]); }
    i=0;
    ch1=getchar();
    while(ch1!='\n') {
        b[i++]=ch1;
        ch1=getchar(); }
    for(i=0;i<s2;i++) {
        printf("%c",b[i]); }
	return 0; }