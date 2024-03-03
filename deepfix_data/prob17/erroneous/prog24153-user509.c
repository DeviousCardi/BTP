# include <stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&y);
    int b[y];
    for(int i=0;i<y;i++) {
        scanf("%d",&b[i]); }
    for(int j=0;j<x;j++) {
        for(int k=0;k<y;k++) {
            if(a[j]=b[k])&&a[j+1]=b[k+1])
            printf("YES");
            return 0; } }
    if(j=x-1) printf("NO");
    return 0; }