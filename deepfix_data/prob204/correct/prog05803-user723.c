#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    int error=0;
    int c=0;
    scanf("%d",&n);
    int a[10];
    for(i=0;i<10;i++){
        a[i]=n%10;
        n=n/10;
        c=c+1; }
     printf("%d\n",c);
    for(i=0;i<(c+1)/2;i++){
        if(a[i]!=a[c-1-i]){
            error=1;
            break; } }
    if(error==1)
        printf("NO");
    if(error==0)
        printf("YES");
	return 0; }