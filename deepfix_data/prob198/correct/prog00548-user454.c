#include <stdio.h>
#include <stdlib.h>
int min(int a, int b) {
    if(a<=b)
    return a;
    else
    return b; }
int main() {
	int n1,n2,f=0,g=0;
	scanf("%d",&n1);
	int a[n1];
	for(int i=0;i<n1;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n2);
	int b[n2];
	for(int i=0;i<n2;i++)
	scanf("%d",&b[i]);
    int c;
    for(int m=0;m<n1;m++) {
        for(int j=0;j<n1-m;j++) {
            c=a[j+1];
            a[j+1]=min(a[j+1],a[j]);
            if(a[j]==min(a[j+1],a[j])) {
                a[j]=c; } } }
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            if(a[n1-i]==b[j]) {
                f=1;
                g=n1-i;
                break; } } }
    if(f==1)
	printf("%d\n",a[g]);
	return 0; }