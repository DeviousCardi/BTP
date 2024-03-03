#include <stdio.h>
#include <stdlib.h>
void input(char t[]) {
    char ch;
    int m=0;
    ch=getchar();
    while(ch!='\n') {
        t[m++]=ch;
        ch=getchar(); } }
int main() {
    int s1;int j=0;
    int s2;
    int max;
    char ch,ch1;
    int p,q,t,i,k,carry;
    scanf("%d%d",&s1,&s2);
    char a[s1];
    char b[s2];
    int c[501];
    input(a);
    input(b);
  for (i=0;i<s1;i++) {
      printf("%c",a[i]); }
  for (i=0;i<s2;i++) {
      printf("%c",b[i]); }
	return 0; }