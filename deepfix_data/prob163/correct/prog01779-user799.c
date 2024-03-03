#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2;
   scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    char s1[500];
    char s2[500];
    int i1,i2,i;
    char t[500];
    for(i1=0;i1<500;i1++) {
        scanf("%c",&s1[i1]); }
    printf("\n");
    for(i2=0;i2<500;i2++) {
        scanf("%c",&s2[i2]); }
    if(n1==n2) {
        for(i=0;i<n1;i++) {
            t[i]=(char)s1[i]+(char)s2[i]-47; } }
    else
    printf("0");
    for(i=0;i<n1;i++)
    printf("%c",t[i]);
	return 0; }