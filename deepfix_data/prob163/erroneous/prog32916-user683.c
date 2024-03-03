#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,i;
    char a1[500],a2[500],ch;
    scanf("%d", &n1);
	scanf("%d", &n2);
	ch=getchar();
	i=0;
	while(ch!="/n"&&ch!=EOF) {
        	a1[i]=ch;
        	ch=getchar();
        	i++;
        	if(i>limit-1) break; }
	ch=getchar();
	i=0;
	while(ch!="/n"&&ch!=eof) {
        	a2[i]=ch;
        	ch=getchar();
        	i++;
        	if(i>limit-1) break; }
	for(i=0;i<n1;i++) {
        	printf("%c", a1[i]); }
    	for(i=0;i<n2;i++) {
        	printf("%c", a2[i]); }
	return 0; }