#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,k,a,z,p,x,c,q;
x=1;
scanf("%d",&n);
c=n;
z=(n+1)/2;
for (k=1;k<=n;k++){
    if(k<=((n+1)/2)){
    for(p=0;p<z;p++)  printf(" ");
    z=z-1;
    if(k==1){
        i=(n+1)/2;
        printf("%d",i%10); }
        else{
     for (j=i-1;j<=((n+1)/2)+(k-1);j++){
    printf("%d",j%10); }
            i=i-1; } }
    else{
        for(q=0;q<=x;q++)  printf(" ");
    for(a=x+1;a<=c-1;a++){
        printf("%d",a%10); }
    x=x+1;
    c=c-1; }
    printf("\n"); }
	return 0; }