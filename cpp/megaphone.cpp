#include <iostream>
#include <cctype>


int main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0; 
	if (argc > 1)
	{
		while (argv[i++][j])
		{
			if (argv[i][j])
			{
				std::cout << toupper(argv[i][j]);
				j++;
			}
		}
	}
}
