#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,d,e,f;
    scanf("%d",&a);
    int s[a];
    for(b=0;b<a;b++){
        scanf("%d",&c);
        s[b]=c; }
    scanf("%d",&d);
    for(e=1;e<=d;e++){
    scanf("%d",&f);
    if((s[f-1]<s[f])&&(s[f]>s[f+1]))
    printf("Yes\n");
    else
    printf("No\n"); }
	return 0; }