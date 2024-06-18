#include <unistd.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	char nl = '\n';
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while (argv[1][i] != '\0' && (argv[1][i] != ' ' && argv[1][i] != '\t'))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, &nl, 1);
	return 0;
}
