#include <stdio.h>
#include <stdlib.h>
void read(char s[], int n){
    char ch;
    ch=getchar();
    int i=0;
    while(ch!=EOF&&i<n){
        s[i]=ch;
        ch=getchar();
        i++; } }
int main() {
	int s1,s2,i;
	scanf("%d\n",&s1);
	scanf("%d\n",&s2);
	char a[s1],b[s2],k[s2],c[s1];
	read(a,s1);
	read(b,s2);
	    for (i=0;i<s1;i++){
	    c[i]=a[i]; }
	    for (i=0;i<s2;i++){
	        k[i]=b[i]; }
	    printf("%c",k[s2]);
	    printf("%c",c[s1]);
	return 0; }