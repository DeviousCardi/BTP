#include <stdio.h>
int main() {
    int a,b,i,j,t,p=0;
    scanf("%d\n",&a);
    int n1[a];
    for(i=0;i<a;i++)
    scanf("%d",&n1[i]);
     scanf("\n%d\n",&b);
    int n2[b];
    for(i=0;i<b;i++)
    scanf("%d",&n1[i]);
    printf("%d %d %d %d",a,b,n1[4],n2[1]);
    for(i=0;i<b;i++) {
        for(j=0;j<a;j++) {
            if(n1[j]==n2[i]) {
                for(t=0;t<b-i;t++) {
                if((n1[j+t]==n2[i+t])&&(t!=b-1-i))
                continue;
                else if(n1[j+t]==n2[i+t])
                printf("YES");
                else if(n1[j+t]!=n2[i+t])
                p=0; } } } }
    (p==1)?printf("YES"):printf("NO");
    return 0; }