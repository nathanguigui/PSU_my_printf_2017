/*
** EPITECH PROJECT, 2017
** my_printf.h
** File description:
** 
*/

#ifndef MY_PRINTF
#define MY_PRINTF

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int my_printf(char *str, ...);
char *int_to_oct(int long nb);
int count_oct(int nb);
char	*long_to_hex(int long nb);
char *int_to_hex_caps(int long nb);
char *int_to_hex_min(int long nb);
int count_pow(int long nb);
int my_put_long(long int nb);
int my_put_nbr(int nb);
int my_put_unsigned(unsigned int nb);
int my_putstr();
int my_compute_power_rec(int nb, int p);
char *my_revstr(char *str);
int my_strlen(char const *str);
void my_putchar(char c);
char	*uns_to_bin(unsigned int nb);
int 	count_bin(unsigned int nb);


#endif