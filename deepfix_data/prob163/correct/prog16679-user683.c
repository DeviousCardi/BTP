#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,i;
    char a1[500],a2[500];
    int b1[500],b2[500];
    scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%s", a1);
	scanf("%s", a2);
    for(i=0;i<n1;i++) {
        b1[i]=a1[i]-48; }
    for(i=0;i<n2;i++) {
        b2[i]=a2[i]-48; }
    for(i=0;i<n1;i++) {
       printf("%d", b1[i]) ; }
    printf("\n");
    for(i=0;i<n2;i++) {
        printf("%d", b2[i]); }
	return 0; }