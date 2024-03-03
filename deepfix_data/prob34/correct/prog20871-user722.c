#include <stdio.h>
#include <stdlib.h>
void check (int a[],int temp,int n) {
    if (temp==0)
    {    if (a[1]>a[0])
            printf("Yes\n");
        else
            printf("No\n"); }
    else if(temp==n)
        { if(a[n-1]<a[n])
            printf("Yes\n");
        else
            printf("No\n"); }
    else if (a[temp]>a[temp+1]&&a[temp]>a[temp-1])
        printf("Yes\n");
    else
            printf("No\n"); }
int main() {
    int i,n,t,temp;
    int a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&temp);
	   check(a,temp,n); }
    return 0; }