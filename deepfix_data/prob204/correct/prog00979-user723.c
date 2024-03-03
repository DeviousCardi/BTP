#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,x,p,k,i,l;
    int sum=0;
    int c=0;
    scanf("%d",n);
    k=n;
    while(x>0){
        c=c+1;
        x=k/10; }
    int a[c];
    for(i=0;i<c;i++){
        a[i]=k%10;
        k=k/10; }
    for(i=0;i<c;i++){
        for(l=c-1;l>i;l--){
            p=p*10; }
        sum=sum+p*a[i]; }
    if(sum==n)
        printf("YES");
    else
        printf("NO");
	return 0; }