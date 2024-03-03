#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,ch,j;i=0;
    char a[1000];
    ch=getchar();
    int count=0;
    while(ch!=EOF) {
        ch=a[i];
        ch=getchar();
        i=i+1;
        count=count+1; }
    for(j=0;j<count;j++) {
    putchar(a[j]);}
	return 0; }