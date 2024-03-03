#include <stdio.h>
#include <stdlib.h>
int main() { {
	    int s;
	    float t;
	    if (s<=200000)
	    {t=0};
	    else if(s>200000&&s<=500000)
	    {t=s*.1};
	    else if (s>500000&&s<=1000000)
	    {t=30000+s*.2};
	    else if (s>1000000)
	    {t=130000+s*.3}; }
	return 0; }