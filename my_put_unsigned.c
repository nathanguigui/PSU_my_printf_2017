/*
** EPITECH PROJECT, 2017
** my_put_unsigned
** File description:
** 
*/

int my_put_unsigned(unsigned int nb)
{
	unsigned int	d;
	
	if (nb > 9)
	{
		my_put_nbr(nb / 10);
	}
	d = nb % 10 + 48;
	my_putchar(d);
	return (0);
}
