#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,d;
    scanf("%d\n",&a);
    int c1[a];
	for(i=0;i<a;i++)
	scanf("%d\n",&c1[i]);
	scanf("%d\n",&b);
    int c2[b];
	for(i=0;i<b;i++)
	scanf("%d\n",&c2[i]);
	d=c1[0];
	for(i=1;i<a;i++) {
        if(c1[i]>=d)
        continue;
        else
        c1[i]=d; }
    for(i=0;i<b;i++) {
        if(c2[i]==d)
        {printf("NO");
         break;}
        else if(i!=b-1)
        continue;
        else if(i==b-1)
        printf("%d",d); }
	return 0; }