#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,k,n;
scanf("%d",&n);
for(i=0;i<n;i++) {
    if(i!=0) {
        for(j=0;j<2n-1;j++) {
        if(j==i||j==2n-1-i)
        print("*"); }
        else
        print(" "); } }
else {
    for(k=0;k<2n-1;k++)
print("*"); }
printf("\n"); }
	return 0; }