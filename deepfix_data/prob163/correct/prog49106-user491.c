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
	int s1,s2,i,j;
	scanf("%d\n",&s1);
	scanf("%d\n",&s2);
	char a[s1],b[s2];
	read(a,s1);
	read(b,s2);
	    for (i=0;i<s1;i++){
	        for (j=0;j<s2;j++){
	            printf("%d",a[i]+b[j]); } }
	return 0; }