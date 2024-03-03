#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if (n==0) return 0;
    else if(n==1) return 1;
    else return 2*hanoi(n-1)+1; }
int main(){
    int i,n,t,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        if(t<0 || t>5000000) printf("no");
        else {
            for(i=0;i<=25;i++) {
            if(t==hanoi(i)) {
                count=1;
                break; } }
        if(count==1)
        printf("yes\n");
        else printf("no\n");
    }}
    return 0; }