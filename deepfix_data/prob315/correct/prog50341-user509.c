#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j,s[50],c=0,temp;
    scanf("%d",&a);
    for(i=0;i<a;i++) {
    scanf("%d",&s[i]); }
    for(i=0;i<a;i++) {
        for(j=i+1;j<a;j++) {
            if(s[i]>s[j]) {
                c++;
                if(c>temp) temp=c;
                else c=0; } } }
	return 0; }