#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int a,n;
    int s[20];
    int i=1,m;
    scanf("%d",&n);
    scanf("%d",&a);
     if(n==1)
       printf("Yes");
       else
    {while(i<n&&a!=EOF)
       { s[i]=a;
        m=max(s[i],s[i-1]);
        i=i+1;
        scanf("%d",&s[i]); } }
       printf("%d",m);
	return 0; }