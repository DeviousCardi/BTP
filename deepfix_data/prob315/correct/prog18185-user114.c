#include <stdio.h>
#include <stdlib.h>
int main()
{int n,count;
scanf("%d",&n);
int s[n],b[n];
for(int i=0; i<n; i++) {
    scanf("%d",&s[i]);
    b[i]=0; }
for(int i=0; i<n; i++)
{   count=0;
    for(int j=i; j<n;j++) {
        if(s[j]<s[i])count ++; }
    b[i]=count;
}int f=0;
for(int i=0;i<n;i++) {
 f=f+b[i];
}printf("%d\n",f);
for(int i=0; i<n; i++) {
    printf("%d ",b[i]); }
	return 0; }