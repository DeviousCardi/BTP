#include <stdio.h>
#include<string.h>
int main() {
    char str[401];
    int n,i=0;
    scanf("%d",&n);
    int j=n,mini=n,a;
    while(i<=2*n) {
        scanf("%s",str);
        i++; }
    while(i<n) {
        while(j<2*n)
        {   if(str[i]!=str[j])
              {    j++;
             continue;}
            if(str[i]==str[j])
            a=j-i;
            if(a<=mini)
            mini=a;
            j++; }
        i++; }
    printf("%d",mini);
    return 0; }