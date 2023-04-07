#include <stdio.h>
int main(void)
{
	unsigned long long v = 1; 
	printf("%llu\n", (v<<64)-1);
	return 0;
}
