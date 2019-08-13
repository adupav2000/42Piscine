#include <stdlib.h>
#include <stdio.h>
#include "../ex03/ft_strjoin.c"
int main()
{
	char *strs[6];
	char *sepp = ";";
	char *ret;

	strs[0] = "asdf0";
	strs[1] = "asdf1";
	strs[2] = "asdf2";
	strs[3] = "asdf3";
	strs[4] = "asd acadsdcsdcf4";
	strs[5] = "asdf5";
	
	ret = ft_strjoin(5, strs, sepp);
	printf("*%s*\n", ret);	

	return 0;
}