#include <stdio.h>
int search(int x[],int length,int s) {
    if(s==0)
        return 1;
    if(s!=x[0]&&length==1)
        return 0;
    int y[length-1],i,j;
    for(i=length-1;i>=0;i--) {
        for(j=0;j<length;j++) {
            if(j<i) {
                y[j]=x[i]; }
            if(j>i) {
                y[j-1]=x[i]; } }
        if(search(y,length-1,s-x[i]))
            return search(y,length-1,s-x[i];
        else
            continue; } }
int main() {
    int n,s;
    scanf("%d%d",&n,&s);
    int i;
    int tr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&tr[i]); }
    if(search(tr,n,s))
        printf("YES");
    else
        printf("NO");
    return 0; }