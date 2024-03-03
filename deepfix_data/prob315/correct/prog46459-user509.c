#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j,s[50],c=0;
    scanf("%d",&a);
    for(i=0;i<a;i++) {
    scanf("%d",&s[i]); }
    for(i=0;i<a;i++) {
        for(j=i+1;j<a;j++) {
            if(s[i]>s[j]) {
                c++; } }
        s[i]=c; }
	printf("%d\n",c);
    for(i=0;i<a;i++)
        printf("%d ",s[i]);
	return 0; }