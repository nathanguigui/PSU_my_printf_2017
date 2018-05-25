/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** 
*/

char *my_revstr(char *str)
{
	char temp;
	int i = 0;
	int l = 0;

	while (str[l] != '\0') {
		l = l + 1;
	}
	l = l - 1;
	while (i < l) {
		temp = str[i];
		str[i] = str[l];
		str[l] = temp;
		i = i + 1;
		l = l - 1;
	}
	return(str);
}