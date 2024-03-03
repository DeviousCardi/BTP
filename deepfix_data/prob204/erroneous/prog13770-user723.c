#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,x,i;
    int error=0;
    int c=0;
    scanf("%d",&n);
    while(x>0){
        c=c+1;
        x=n/10; }
    int a[c];
    for(i=0;i<c;i++){
        a[i]=n%10;
        k=n/10; }
    for(i=0;i<(c+1)/2;i++){
        if(a[i]!=a[c-1-i]){
            error=1;
            break; } }
    if(error==0)
        printf("NO");
    else
        printf("YES");
	return 0; }