#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int max,a;
    int min=INT_MAX;
    for(int j=0;j<n;j++) {
        max=INT_MIN;
    for (int i=0;i<m;i++) {
        scanf("%d",&a);
        if(a>max)
        max=a; }
    if(min>max)
    min=max; }
    printf("%d",min);*/
    printf("%d",max);
    return 0; }