#include <stdio.h>
int group(int a[],int n,int i,int suma,int sumb,int net_sum) {
    if(i==n) {
        if(suma+sumb==net_sum)
            return 1;
        else
            return 0; }
    return group(a,n,i+1,suma+a[i],sumb,net_sum)||group(a,n,i+1,suma,sumb+a[i],net_sum); }
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n],total=0;
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]);
        total=total+a[i]; }
    if(group(a,n,0,0,0,total))
        printf("YES");
    else
        printf("NO");
    return 0; }