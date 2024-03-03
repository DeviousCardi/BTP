#include <stdio.h>
int main() {
    int a[10000];
    int n,counter;
    int i;
    scanf("%d\n",&n);
    for(int j=0;j<n-1;j++)
    {scanf("%d,",a+j);}
    scanf("%d",&a[n-1]);
    for(i=0;i<n;i++) {
        if(a[i]+1) {
            counter=1;
            for(int j=i+1;j<n;j++) {
                if(a[j]==a[i]) {
                    counter++;
                    a[j]=-1; } }
            if(a[i]!=counter) {
                break; } } }
    if(i!=n)
    {printf("No");}
    else
    {printf("Yes");}
    return 0; }