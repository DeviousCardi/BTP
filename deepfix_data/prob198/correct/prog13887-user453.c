#include <stdio.h>
int main() {
    int n1,n2;
    int a1[20],a2[20];
    scanf("%d\n",&n1);
    for(int i=0;i<n1;i++)
    scanf("%d",&a1[i]);
    scanf("\n%d\n",&n2);
    for(int i=0;i<n2;i++)
    scanf("%d",&a2[i]);
    int c[20];
    for(int i=0;i<20;i++)
    c[i]=0;
    int flag=0;
    for(int i=0;i<n1;i++)
    for(int j=0;j<n2;j++) {
        if(a2[j]==a1[i]) {
            c[i]=0;
            flag=1;
            break; }
        if(flag==0)
        c[i]=1; }
    for(int i=0;i<20;i++)
    printf("%d\n",&c[i]);
    return 0; }