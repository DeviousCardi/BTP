# include <stdio.h>
int main() {
    int n,c,min=1000;
    scanf("%d",&n);
     int s[2*n];
    for(int i=0;i<2*n;i++) {
        scanf("%d",&s[i]); }
    for(int i=0;i<2*n;i++)
    {c=0;
        for(int j=i+1;j<2*n;j++) {
        if(s[i]!=s[j]) {
            c++; }
        if(1<=c<min)
        min=c; } }
    printf("%d",min);
    return 0; }