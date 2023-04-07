#include<stdio.h>
#include<unistd.h>

int main(void)
{
	FILE *fp;

	fp = fopen("\"\\?$*\'MaRViN\'*$?\\\"", "w");
	if(!fp)
	{
		fprintf(stderr, "cannot make file!\n");
	}
	else
	{
		fprintf(fp,"42");
	}

	return 0;
}
