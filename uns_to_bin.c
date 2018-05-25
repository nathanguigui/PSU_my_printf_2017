/*
** EPITECH PROJECT, 2017
** uns_to_bin.c
** File description:
** 
*/

int	count_bin(unsigned int nb)
{
	unsigned int i = 0;

	while(nb > my_compute_power_rec(2, i) && nb < my_compute_power_rec(2, i + 1)) {
		i = i + 1;
	}
	return(i);
}

char	*uns_to_bin(unsigned int nb)
{
	unsigned int i = 0;
	unsigned int k = count_pow(nb);
	unsigned int temp_nb = nb;
	unsigned int temp;
	char *result = malloc(sizeof(char) * k + 1);

	while(temp_nb != 0) {
		temp = temp_nb % 2;
		if (temp < 10)
			temp = temp + 48;
		result[i] = temp;
		temp_nb = temp_nb / 2;
		i = i + 1;
	}
	my_revstr(result);
	result[i] = '\0';
	return(result);
}
