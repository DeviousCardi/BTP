#include <stdio.h>
int main() {
    int i=0,j=0;
    int n1,n2;
    int p=0,q=0;
    scanf("%d",&n1);
    int a1[n1];
    while(i<n1){
        scanf("%d",&a1[i]);
        i++; }
    scanf("%d",&n2);
    int a2[n2];
    while(j<n2){
        scanf("%d",&a2[i]);
        j++; }
    while(p<n2 && q<n1){
        if (a2[p]==a1[q])
        {p=p+1;}
        q++; }
    if(p==n2){printf("YES");}
    else{printf("NO");}
    return 0; }