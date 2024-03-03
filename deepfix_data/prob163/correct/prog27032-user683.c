#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,i;
    char a1[500],a2[500],ch;
    scanf("%d", &n1);
	scanf("%d", &n2);
	for(i=0;i<n1;i++) {
        	ch=getchar();
        	if(ch!="\n") a1[i]=ch; }
    for(i=0;i<n2;i++) {
        	ch=getchar();
        	if(ch!="\n") a2[i]=ch; }
    for(i=0;i<n1;i++) {
        	printf("%d", a1[i]); }
    printf("\n");
    for(i=0;i<n2;i++) {
        	printf("%d", a2[i]); }
	return 0; }