#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,i;
    char a1[500],a2[500],ch;
    scanf("%d", &n1);
	scanf("%d", &n2);
	ch=getchar();
	i=0;
	while(i<n1) {
        	a1[i]=ch;
        	ch=getchar();
        	i++; }
	ch=getchar();
	i=0;
	while(i<n2) {
        	a2[i]=ch;
        	ch=getchar();
        	i++; }
	for(i=0;i<n1;i++) {
        	printf("%c", a1[i]); }
	   printf("\n");
    for(i=0;i<n2;i++) {
        	printf("%c", a2[i]); }
	return 0; }