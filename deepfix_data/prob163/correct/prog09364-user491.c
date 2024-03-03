#include <stdio.h>
#include <stdlib.h>
void read(int s[], int n){
    int ch;
    scanf("%d",&ch);
    int i=0;
    while(ch!=EOF&&i<n){
        s[i]=ch;
            scanf("%d",&ch);
        i++; } }
int main() {
	int s1,i;
	scanf("%d",&s1);
	int c[s1];
	int a[s1];
	read(a,s1);
	for(i=0;i<s1;i++){
	    printf("%d",a[i]); }
	return 0; }