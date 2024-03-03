#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int n;
scanf("%d",&n);
int i;
int j;
for(i=1;i<=n;i=i+1) {
    for(j=1;j<=n;j=j+1) {
if(i<=(n+1/2)) {
        if((j<=i-1)||(j>n-i))
        {printf(" ");}
        else
        {printf("*");} }
else if(i>(n+1/2)) {
    if((j<=n-i)||(j>i))
    {printf(" ");}
    else
    {printf("*");} } }
    printf("\n"); }
	return 0; }