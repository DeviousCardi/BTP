#include <stdio.h>
#include <stdlib.h>
int main() {
    char pal[50];
    scanf("%s",pal);
    int x,y,z,c=0;
    for(x=0;x<50;x++) {
        if(pal[x]!=EOF)
        c++; }
    int i,k=0;
    for(i=0;i<c/2;i++) {
    if(pal[i]==pal[c-1-i])
    k++; }
    if(k==n/2)
    printf("YES");
    else
    printf("NO");
	return 0; }