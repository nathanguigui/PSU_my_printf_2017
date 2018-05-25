/*
** EPITECH PROJECT, 2017
** int_to_oct.c
** File description:
** 
*/

int 	count_oct(int nb)
{
	int i = 0;

	while(nb > my_compute_power_rec(8, i) && nb < my_compute_power_rec(8, i + 1)) {
		i = i + 1;
	}
	return(i);
}

char	*int_to_oct(int long nb)
{
	int long i = 0;
	int long k = count_pow(nb);
	int long temp_nb = nb;
	int long temp;
	char *result = malloc(sizeof(char) * k + 1);

	while(temp_nb != 0) {
	    temp = temp_nb % 8;
	    if (temp < 10)
	    	temp = temp + 48;
	    result[i] = temp;
	    temp_nb = temp_nb / 8;
	    i = i + 1;
	}
	my_revstr(result);
	result[i] = '\0';
	return(result);

}