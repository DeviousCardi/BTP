#include <stdio.h>
int check(int num[],int start,int size,int s) {
    int a=0,sum=0;
    for(int i=0;i<start;i++)
    a=a+num[i];
    for(int i=start;i<size;i++)
    {    sum=a+num[i];
         if(sum==s)
         return 1; }
     if(start==size)
    return 0;
    return check(num,start+1,size,s); }
int main() {
    int n,s;
    scanf("%d %d\n",&n,&s);
    int num[1000000];
    for(int i=0;i<n;i++)
    scanf("%d ",&num[i]);
    if(check(num,0,n,s))
    printf("YES");
    else
    printf("NO");
    return 0; }