# include <stdio.h>
# include <string.h>
int main() {
    int i,j,c=0;
    char a[100000],b[100000];
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<strlen(a);i++) {
        if(a[i]==b[0]) {
            for(j=0;j<strlen(b);j++) {
                if(a[i+j]==b[j])
                c++; } } }
    if(c>=strlen(b))
    printf("YES");
    else
    printf("NO");
 return 0; }