#include <stdio.h>
#include <stdlib.h>
int cat_num(double num) {
        if(num==0)
        return 1;
        else
        return cat_num(num-1)*((2*(2*num-1)/(num+1))); }
int main() {
    int i,j,t,key;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {   j=1;
            scanf("%d",&key);
            while(cat_num(j)<key) {
                j++; }
            printf("%d\n",cat_num(j)); }
	return 0; }