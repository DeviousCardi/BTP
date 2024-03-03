#include <stdio.h>
#include <stdlib.h>
void check(int b[],int x,int s);
void show(int m,int n);
int main() {
    int n,i,sum;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&sum);
    check(a,n,sum);
	return 0; }
void check(int b[],int x,int s) {
    int j,k;
    for(j=0;j<x-1;j++)
    for(k=j+1,k<x,k++)
    if(b[j]==b[k])
    show(j,k); }