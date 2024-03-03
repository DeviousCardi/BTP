#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j,c=0,sum=0;
    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++) {
    scanf("%d",&s[i]); }
    for(i=0;i<a;i++) {
        for(j=i+1;j<a;j++) {
            if(s[i]>s[j]) {
                c++; } }
        sum=sum+c;
        s[i]=c;
        c=0; }
    printf("%d\n",sum);
    for(i=0;i<a;i++)
    printf("%d ",s[i]);
	return 0; }