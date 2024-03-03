#include <stdio.h>
int main(){
    int m,n;
    int count=0;
    scanf("%d,%d",&m,&n);
    for(int b=2;b<n;b++) {
        if(n%b==0)
        count++; }
    printf("%d",m);
    if(count==m)
    printf("YES");
    else printf("NO");
    return 0; }