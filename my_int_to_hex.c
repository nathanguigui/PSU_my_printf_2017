/*
** EPITECH PROJECT, 2017
** int_to_hex.c
** File description:
** 
*/

int 	count_pow(int long nb)
{
	int i = 0;

	while(nb > my_compute_power_rec(16, i) && nb < my_compute_power_rec(16, i + 1)) {
		i = i + 1;
	}
	return(i);
}

char	*int_to_hex_caps(int long nb)
{
	int long i = 0;
	int long k = count_pow(nb);
	int long temp_nb = nb;
	int long temp;
	char *result = malloc(sizeof(char) * k + 1);

	while(temp_nb != 0) {
	    temp = temp_nb % 16;
	    if (temp < 10)
	    	temp = temp + 48;
	    else
	    	temp = temp + 55; 
	    result[i] = temp;
	    temp_nb = temp_nb / 16;
	    i = i + 1;
	}
	my_revstr(result);
	result[i] = '\0';
	return(result);

}

char	*int_to_hex_min(int long nb)
{
	// int nbr = nb;
	// nb = nbr;
	int long i = 0;
	int long k = count_pow(nb);
	int long temp_nb = nb;
	int long temp;
	char *result = malloc(sizeof(char) * k + 1);

	while(temp_nb != 0) {
	    temp = temp_nb % 16;
	    if (temp < 10)
	    	temp = temp + 48;
	    else
	    	temp = temp + 87;
	    
	    result[i] = temp;
	    temp_nb = temp_nb / 16;
	    i = i + 1;
	}
	my_revstr(result);
	result[i] = '\0';
	return(result);
}