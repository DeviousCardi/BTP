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
	int s1;
	scanf("%d\n",&s1);
	char a[s1];
	read(a,s1);
	putchar(a[s1]);
	return 0; }