#include <stdio.h>
int main() {
    int count=0;
    int ch;
    int n,k,j;
    int s[count];
    int x=0;
    int sum=0;
    scanf("%d",&n);
    ch=getchar();
    while(ch!=EOF&&count<(2*n-1)) {
        s[count]=ch;
        count=count+1;
        ch=getchar(); }
    for(count=1;count<(2*n-2);count=count+2) {
        if(s[count]==',') {
            continue; }
    else { return 0; } }
    for(k=1;k<=n;k++) {
        for(j=0;j<(2*n-1);j=j+2) {
            if(s[j]==k) {
                sum=sum+1; } }
        if(sum==k)
        { x=1;}
        else {
            break; }
        sum=0; }
    if(x==1) {
        printf("Yes"); }
    else{ printf("No"); }
    return 0; }