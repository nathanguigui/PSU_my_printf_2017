/*
** EPITECH PROJECT, 2017
** my_compute_power_rec.c
** File description:
** 
*/

int my_compute_power_rec(int nb, int p)
{
	if (nb == 0)
		return(1);
	if (p < 0)
		return(0);
	p = p - 1;
	nb = nb * my_compute_power_rec(nb, p - 1);
	return(nb);
}