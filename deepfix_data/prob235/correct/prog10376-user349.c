#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,value=0,temp;
    scanf("%d",&n);
    for (i=1;i<=n-1;i++) {
    value= (value+1)%10;
        temp=value;
    for(j=(n+1)/2-i;j>=0;j--) {
        printf(" "); }
     for(j=(n+1)/2;j<=2*i-1;j++) {
            printf("%d",temp);
            temp = (temp+1)%10; }
    printf("\n"); }
    for(i=n;i>=1;i--) {
        value= (value+1)%10;
        temp=value;
        for(j=0;j<n-i;j++){
            printf(" "); }
        for(j=1;j<=2*i-1;j++) {
            printf("%d",temp);
            temp = (temp+1)%10; }
        printf("\n"); }
	return 0; }