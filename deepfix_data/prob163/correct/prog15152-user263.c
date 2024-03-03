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
    int c[501];
   for(i=0;i<s1;i++) {
       scanf("%c\n",&a[i]); }
   for (j=0;j<s2;j++) {
       scanf("%c\n",&b[j]); }
   for (j=0;j<s1;j++) {
       printf("%c",a[j]); }
   for (j=0;j<s2;j++) {
       printf("%c",b[j]); }
	return 0; }