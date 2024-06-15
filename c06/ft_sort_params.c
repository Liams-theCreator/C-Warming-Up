#include <unistd.h>

int main(int argc, char const *argv[])
{
    int i = argc - 1, j = 0;
    char nl = '\n';
    while(i >= 1)
    {
        j = 0;
        while(argv[i][j] != '\0')
        {
            write(1,&argv[i][j],1);
            j++;
        }
        write(1,&nl,1);
        i--;
    }
    return 0;
}
