#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    char tab[256] = {0};
    if(argc == 3)
    {
        while (argv[1][i] !='\0')
        {
            if(argv[1][i] && tab[argv[1][i]] == 0)
                tab[argv[1][i]] = 1;
            i++;
        }
        while (argv[2][j] != '\0')
        {
            if(argv[2][j] && tab[argv[2][j]] == 1)
            {
                tab[argv[2][j]] = 2;
                write(1, &argv[2][j], 1);
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}