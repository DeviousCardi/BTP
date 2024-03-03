#include <stdio.h>
int n;
int count(int a[],int j,int sum,int tempsum) {
    if(j>n-1)return 0;
    if(tempsum+a[j+1]==sum)return 1;
    else return count(a,j+1,sum,tempsum)|| return count(a,j+1,sum,tempsum+a[j+1]); }
int main() {
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int s=0;
    for(int i=0;i<n;i++)
    s=s+a[i];
    if(s%2!=0)
    printf("NO");
    else {
        int k=count(a,-1,s/2,0);
        if(k==0)printf("NO");
        else printf("YES"); }
    return 0; }