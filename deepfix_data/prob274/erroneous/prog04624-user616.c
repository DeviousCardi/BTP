#include <stdio.h>
int main(){
    int n=0;
    scanf("%t",&n);
    int ar[n];
    for(int i=0;i<n;i++) {
        scanf("%d";&ar[i]); }
    int a=1;
    int t=0;
    int a2[n];
    a2[0]=1;
    int k=0;
    int s;
    int s2;
    int c=1;
    int flag=0;
    for(int i=0;i<n;i=ar[i+1]) {
        for(int j=0;j<c;j++) {
            if(a2[j]==i) {
                flag=1;
                s=j;
                break; } }
        if(flag==1) {
            printf("%d %d",c,c-j); }
        else {
            a2[c]=i;
            c++; }
        k++; }
    return 0; }