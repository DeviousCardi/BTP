#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int d=0;
    int i;
    for(i=0;i<=n/2;i++);
    {if(n%i==0){
        d=d+i;} }
    if(d==n){
        printf("YES"); }
    else {printf("NO");}
    printf("%d",d);
	return 0; }