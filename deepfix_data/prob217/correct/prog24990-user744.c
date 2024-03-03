#include<stdio.h>
#include<math.h>
int main() {
    int n;
    int i,j,num,s;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&s);
    for(i=0;i<n;i++) {
        num=s-a[i];
        for(j=0; j<n; j++) {
            if(num==a[j]) {
                if((num!=a[i])) {
                printf("(%d,%d)\n",a[i],num); } } } }
    return 0; }