#include <unistd.h>

int main(int argc, char const *argv[])
{
    (void)argc;
    int i = 0;
    const char *firstidx = argv[0];
    const char nl = '\n';

    while(firstidx[i] != '\0')
    {
        write(1,&firstidx[i],1);
        i++;
    }

    write(1, &nl, 1);

    return 0;
}
