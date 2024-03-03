#include <stdio.h>
int main(){
    int m,n;
    int count=0;
    scanf("%m,%n",&m,&n);
    for(int b=2;b<n;b++) {
        if((n%b)==0)
        count++; }
    printf("%d",count);
    if(count==m)
    printf("YES");
    else printf("NO");
    return 0; }