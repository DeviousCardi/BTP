#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) {
    if (a>=b)
    return a;
    else
    return b; }
int main() {
	int n1,n2,i,n3;
	char a[500],b[500],c[501];
	scanf("%d %d",&n1,&n2);
	n3=max(n1,n2);
	for (i=n3;i>n3-n1+1;i++) {
	    scanf("%c",&a[i]); }
	for (i=n3;i>n3-n2+1;i++) {
	    scanf("%c",&b[i]); }
	for (i=n3;i>=0;i--) {
	    if ((a[i]+b[i])<10)
	    c[i]=a[i]+b[i];
        else if ((a[i]+b[i])>=10) {
            c[i]=((a[i]+b[i])%10);
            c[i-1]=c[i]+1; } }
    for (i=n3;i>=0;i--)
	printf("%c",c[n3-i]);
	return 0; }