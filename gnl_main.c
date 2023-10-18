#include <stdio.h>
#include <fcntl.h> //(for open)
#include <stdlib.h>

#include "get_next_line.h"
//#include "get_next_line_bonus.h"

int main()
{
	int fd1 = open("get_next_line.c", O_RDONLY);
	//int fd2 = open("main.c", O_RDONLY);
	///int fd3 = open("get_next_line.h", O_RDONLY);
	//int fd4 = open("get_next_line_utils.c", O_RDONLY);

	for (int i = 0; i < 135; i++)
	{
		char *res1 = get_next_line(fd1);
		printf("\nline%i	FD=%i, <%s>", i, fd1, res1);
		//char *res2 = get_next_line(fd2);
		//printf("line%i	FD=%i, <%s>", i, fd2, res2);
		//char *res3 = get_next_line(fd3);
		//printf("line%i	FD=%i, <%s>", i, fd3, res3);
		//char *res4 = get_next_line(fd4);
		//printf("line%i	FD=%i, <%s>", i, fd4, res4);
		free(res1);
		//free(res2);
		//free(res3);
		//free(res4);
	}
	close(fd1);
	//close(fd2);
	//close(fd3);
	//close(fd4);
	return (0);
}
