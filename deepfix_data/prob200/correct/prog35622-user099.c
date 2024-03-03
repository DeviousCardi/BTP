#include <stdio.h>
int arr[100]={0};
int n;
int max(int a,int b) {
    if(a<b) return b;
    else return a; }
int getMaxLessThan(int upperLimit) {
    int i,get_it=0;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit) get_it=max(get_it,arr[i]); }
    return get_it; }
int main() {
    int k,choco=2000000000,i;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("%d\n",choco);
    for(i=0;i<k;i++) {
        choco=getMaxLessThan(choco);
        printf("%d\n",choco); }
    return 0; }