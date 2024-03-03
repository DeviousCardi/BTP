#include <stdio.h>
int main() {
    int n,i,j,p=-1,num=-1,c,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        c=0;
        if(a[p]!=a[i]) {
            for(j=0;j<n;j++) {
                if(a[j]==a[i])
                    ++c; }
            if(c!=num)
                flag=1;
            else if(c==num) {
                p=i; }
        else
            continue; }
    if(flag==0)
        printf("Yes");
    else
        printf("No");
    return 0; }