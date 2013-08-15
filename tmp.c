#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv[])
{
    int fd;

    fd = open(argv[1], O_DIRECT, 0666);
    if (fd < 0) {
        perror("open");
        return -1;
    }
    close(fd);
    return 0;
}
