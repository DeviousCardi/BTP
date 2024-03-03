#include <stdio.h>
#include <stdlib.h>
int main() {
    int s1;int j=0;
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
    while(ch!='\n'&&ch!=EOF) {
        a[i++]=ch;
        ch=getchar(); }
    for(i=0;i<s1;i++) {
        printf("%c",a[i]); }
    ch1=getchar();
    while(ch1!='\n'&&ch1!=EOF) {
        b[j++]=ch1;
        ch1=getchar(); }
    for(j=0;j<s2;j++) {
      printf("%c",b[j]); }
	return 0; }