#include <stdio.h>
void SORT(int K[],int start,int m) {
    int h=start;
    if(start==m) return;
    else {
        int max=K[start];
        for(int i=start;i<m;i++) {
            if(K[i]>max) {
                max=K[i];
                h=i; } }
        int temp=K[h];
        K[h]=K[start];
        K[start]=temp;
        start++;
        SORT(K,start,m); } }
int main() {
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    scanf("%d",&s[i]);
    int m = n/2;
    SORT(s,0,n);
    if(n%2==0)
    printf("%.1f",(s[m]+s[m-1])/2.0);
    else
    printf("%d",s[m-1]);
    return 0;
    return 0; }