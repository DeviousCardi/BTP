#include <stdio.h>
int valid(long int[],int ,int);
int main() {
    int n,a=0;
    long int s;
    scanf("%d%ld",&n,&s);
    long int trans[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&trans[i]); }
    a=valid(trans,n,s);
    if(a==1) printf("YES");
    else if(a==0) printf("NO");
    return 0; }
int valid(long int trans[],int n,int s)
{int a=0;
    for(int i=0;i<n;i++) {
        if(trans[n-1]+trans[i]==s) {
            return 1; } }
    return valid(long int trans[],int n-1,int s); }