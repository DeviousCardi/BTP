#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,i;
    char a1[500],a2[500];
    scanf("%d", &n1);
	scanf("%d", &n2);
	printf("%d", n1);
	printf("%d", n2);
	for(i=0;i<n1;i++) {
        	scanf("%c", &a1[i]); }
    for(i=0;i<n2;i++) {
        	scanf("%c", &a2[i]); }
	for(i=0;i<n1;i++) {
        	printf("%c", a1[i]); }
    for(i=0;i<n2;i++) {
        	printf("%c", a2[i]); }
	return 0; }