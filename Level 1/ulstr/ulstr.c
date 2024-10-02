#include<unistd.h>

char ft_convert(char *str)
{
	int i;
	i = 0;
	while  (str[i] != '\0') 
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		
		write (1, &str[i],1);
		i++;

	}
}
int main(int argsc, char **argsv)
{

	if (argsc == 2)
		ft_convert(argsv[1]);
		
	write(1, "\n",1);
}