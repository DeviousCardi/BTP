#include <stdio.h>
#include <stdlib.h>
int read(char s[], int n){
    char ch;
    ch=getchar();
    int i=0;
    while(ch!=EOF&&i<n){
        s[i]=ch;
        ch=getchar();
        i++;
        printf("%d",s[i]); }
    return 0; }
int main() {
	int s1,s2;
	scanf("%d\n",&s1);
	scanf("%d\n",&s2);
	char a[s1],b[s2];
	read(a,s1);
	read(b,s2);
	return 0; }