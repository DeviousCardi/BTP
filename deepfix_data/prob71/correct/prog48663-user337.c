#include <stdio.h>
void sort(int ary[],int n)
{   int i,j,temp;
    for (i=0;i<n;i++) {
        for (j=0;j<(n-i-1);j++) {
            if (ary[j] > ary[j+1]) {
                temp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp; } } } }
int main() {
    int n;
    scanf("%d",&n);
    int ary[n],i;
    for(i=0;i<n;i++) {
        scanf("%d",&ary[i]); }
    sort(ary,n);
    if(n%2!=0) {
        int m=ary[(n-1)/2];
        printf("%d",m); }
    else {
        float m=(ary[n/2-1]+ary[n/2])/2;
        printf("%.1f",m); }
    return 0; }