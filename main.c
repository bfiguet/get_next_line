#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main ()
{
        int fd;
        char    *s;

        fd = open ("test.txt", O_RDONLY);
        s = get_next_line(fd);
        while (s)

        {
                printf("%s\n", s);
		free(s);
		str = get_next_line(fd);
        }
        free(s);
	return (1);
}

