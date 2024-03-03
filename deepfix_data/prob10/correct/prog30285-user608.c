#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int countstat=0;
    for(int i=0;i<n-1;i++) {
        int count=1;
        for(int j=i+1;j<n;j++) {
            if(a[j]>a[i])
            count+=1; }
        if(count>countstat)
        countstat=count; }
    printf("%d",countstat);
    return 0; }