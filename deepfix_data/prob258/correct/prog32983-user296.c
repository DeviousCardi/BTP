#include <stdio.h>
int main() {
    int a,n;
    int s[20];
    int i=0,j=0;
    scanf("%d",&n);
    scanf("%d",&a);
    if(n==1)
    printf("Yes");
    else {
     while(i<n&&a!=EOF)
       { s[i]=a;
        i=i+1;
        scanf("%d",&s[i]); }
    {   for(i=1;i<n-1;i=i+1) {
     if((s[i]>s[i-1])&&(s[i]>s[i+1]))
     {j=j+1;} }
    if(j>0)
    printf("Yes");
    else
    printf("No");}
    if((i=n-1)||(i==0))
    if((s[n-1]>s[n-2])||s[0]>s[1])
    printf("Yes"); }
	return 0; }