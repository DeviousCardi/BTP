#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,ch,j;i=0;
    char a[1000];
    int count=0;
    ch=getchar();
    while(ch!=EOF) {
        ch=a[i];
        ch=getchar();
        i=i+1; }
    for(j=0;j<i;j++) {
    putchar(a[i]);}
        if(a[i]==a[count-1-i]) {
            printf("YES"); }
        else {
            printf("NO"); }
	return 0; }