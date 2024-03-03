#include <stdio.h>
#include <stdlib.h>
int cat_num(int num) {
        if(num==0)
        return 0;
        else
        return cat_num(num-1)*((2*(2*num-1)/num+1));
        printf("%d",cat_num(num)); }
int main() {
    int i,j,t,key;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {   j=0;
            scanf("%d",&key);
            printf("%d\n",cat_num(2)); }
	return 0; }