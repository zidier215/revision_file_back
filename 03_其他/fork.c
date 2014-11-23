/* ************************************************************************
 *       Filename:  fork.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2013年08月12日 13时33分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;

	for(i = 0; i < 2; i++)
	{
		fork();
		printf("A");
	}
	return 0;
}


