#include <stdio.h>
int main() {
    int n1,n2;
    int a[20],b[20];
    scanf("%d\n",&n1);
    for(int i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("\n%d\n",&n2);
    for(int i=0;i<n2;i++) {
        scanf("%d",&b[i]); }
    int t;
    int y;
    for(int i=0;i<n2;i++) {
        if(b[0]==a[i]) {
          t=i;
          break;
          y==1; } }
    int r;
    if(y==1) {
        for(int i=1;i<n2;i++) {
          if(b[i]!=a[t+i]) {
            r=1;
            break; } }
        if(r==1)
        printf("NO");
        else
        printf("YES"); }
    else
    printf("NO");
     return 0; }