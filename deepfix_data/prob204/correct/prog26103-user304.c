#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[20];
    int i,j,n,c;
    c=0;
    scanf("%s\n",a);
    for(i=0;a[i]!='\0';i++) ;
    n=i;
    i=0;
    j=n;
    do {
        if(a[i]==a[j])
        c=1;
        else
        c=0;
        j--;
        i++;
    }while((j!=i)&&(i-j!=1));
    if(c==1)
    printf("YES");
    else
    printf("NO");
	return 0; }