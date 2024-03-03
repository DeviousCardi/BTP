#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int a,n;
    int s[20];
    int i=1,m,j=0;
    scanf("%d",&n);
    scanf("%d",&a);
    while(i<n&&a!=EOF)
       { s[i]=a;
        m=max(s[i],s[i-1]);
        i=i+1;
        scanf("%d",&s[i]); }
    while(i>=0) {
     if(s[i]==m)
     {j=j+1;}
     i=i-1; }
    if(j==1)
    printf("Yes");
    else
    printf("No");
	return 0; }