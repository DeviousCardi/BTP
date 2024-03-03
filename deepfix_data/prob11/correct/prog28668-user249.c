#include <stdio.h>
int search(int tr[],int length,int s) {
    if(s==tr[0]&&length==1)
        return 1;
    if(s!=tr[0]&&length==1)
        return 0;
    int t[length-1],i,j;
    for(i=length-1;i>=0;i--) {
        for(j=0;j<length-1;j++) {
            if(j<i) {
                t[j]=tr[i]; }
            if(j>i) {
                t[j-1]=tr[i]; } } }
    return search(tr,length-1,s); }
int main() {
    int n,s;
    scanf("%d%d",&n,&s);
    int i;
    int tr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&tr[i]); }
    printf("%d",search(tr,n,s));
    return 0; }