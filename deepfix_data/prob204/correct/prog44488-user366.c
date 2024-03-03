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
   int n=c+1;
    int i,k=0;
    for(i=0;i<n/2;i++) {
    if(pal[i]==pal[n-1-i])
    k++; }
    if(k==n/2)
    printf("YES");
    else
    printf("NO");
	return 0; }