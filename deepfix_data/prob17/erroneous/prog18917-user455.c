#include <stdio.h>
int main() {
    int a,b,i;
    scanf("%d\n",&a);
    int n1[a];
    for(i=0;i<a;i++)
    scanf("%d",&n1[i]);
     scanf("%d\n",&b);
    int n1[b];
    for(i=0;i<b;i++)
    scanf("%d",&n1[i]);
    for(i=0;i<b;i++) {
        for(j=0;j<a;j++) {
            if(n1[j]==n2[i]) {
                for(t=0;t<b-i;t++)
                if(n1[j+t]==n2[i+t])
                continue;
                else if(n1[j+t]==n2&&i+t==b-1-i)
                p=1; } } }
    (p==1)?printf("YES"):printf("NO");
    return 0; }