#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[20];
    int i,len=0;
    for(i=0;a[i]!='\0';i++)
    {scanf("%c",&a[i]);
      len++; }
    int j,found=1;
    for(i=0,j=len-1;i<(len/2);i++,j--) {
        if(a[i]!=a[j]) {
            found=0;
            break; } }
    if(found==1)
    printf("YES");
    else printf("NO");
	return 0; }