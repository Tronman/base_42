#include <unistd.h>

int		wdmatch(char *s1, char *s1)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		while (j < ft_strlen(s2))
		{
			if (s1[i] == s2[j])
// checks how many times does the alpha repeat in the array
int		repeat(char *str, char c)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == c)
			num++;
	}
	return (num);
}

void	map_it(char *str, int *c)
{
	int i;

	i = 0;
	for (i < ft_strlen(str))
	{
		str[i] = repeat(str, str[i]);
		i++;int main(int argc, char *argv[])
{

	int frep[ft_strlen(argv[1]) * sizeof(int)];
	int map[ft_strlen(argv[1])];

	
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

