#include <stdio.h>
#include <stdlib.h>
int main() {
    char pal[50];
    scanf("%s",pal);
    int x,c;
    x=0;
    c=0;
    while(pal[x]!=EOF) {
        c++;
        x++; }
      int i,k=0;
    for(i=0;i<c/2;i++) {
    if(pal[i]==pal[c-1-i])
    k++; }
    if(k==c/2)
    printf("YES");
    else
    printf("NO");
	return 0; }