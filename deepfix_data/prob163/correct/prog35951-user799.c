#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2;
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    char s1[500],s2[500];
    int i1,i2,i;
    char t[n1];
    for(i1=0;i1<n1;i1++) {
        scanf("%c",&s1[i1]); }
    printf("\n");
    for(i2=0;i2<n2;i2++) {
        scanf("%c",&s2[i2]); }
    if(n1==n2) {
        for(i=0;i<n1;i++) {
            t[i]=s1[i]+s2[i]-47; } }
    else
    printf("0");
    for(i=0;i<n1;i++)
    printf("%d",t[i]);
	return 0; }