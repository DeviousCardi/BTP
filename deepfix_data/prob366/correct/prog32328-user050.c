#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);printf("%d\n",n);
    int X[2*n],Y[n];
    for(int i=0;i<(2*n);i++) {
        scanf("%d",&X[i]);printf("%d\n",&X[i]); }
    for(int i=1;i<=n;i++) {
        int a=0,b=0;
        for(int j=0;j<(2*n);j++) {
            if(X[j]==i) {
                a=j;
                for(int k=(a+1);k<(2*n);k++) {
                    if(X[k]==i)
                    b=k;
                    Y[i-1]=(b-a); } } } }
    int min=Y[0];
    for(int i=1;i<n;i++) {
        if(min>Y[i]) {
            min=Y[i]; } }
    printf("%d",min);
    return 0; }