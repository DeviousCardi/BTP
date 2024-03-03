#include <stdio.h>
void sort(int s[],int start,int end,int m) {
    int k,temp;
    if(start>end) {
        for(int i=0;i<=end;i++)
        printf("%d  ",s[i]);
        return; }
    else {
        int max = s[start];
        for(int i=start;i<=end;i++) {
            if(s[i]>max)
            max=s[i];
            k=i; }
        temp=s[k];
        s[k]=s[start];
        s[start]=temp;
        start++;
        sort(s,start,end,m); } }
int main() {
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    scanf("%d",&s[i]);
    int m = n/2;
    sort(s,0,n-1,m);
    if(n%2==0)
    printf("%.1f",(s[m]+s[m-1])/2.0);
    else
    printf("%d",s[m-1]);
    return 0;
    return 0; }