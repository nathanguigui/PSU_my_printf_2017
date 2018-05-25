/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** 
*/

int detect_case_int(char *str, int i, long variable)
{
	switch(str[i]) {

		case 'c':
			my_putchar(variable);
			return(1);
			break;
		case 'd':
			my_put_nbr(variable);
			return(2);
			break;
		case 'i':		
			my_put_nbr(variable);
			return(2);
			break;
		case 'l':
			if (str[i + 1] == 'd') {
				my_put_long(variable);
				return(3);
				break;
			}
		case 's':
			my_putstr(variable);
			return(4);
			break;
		case 'u':
			my_put_unsigned(variable);
			return(5);
			break;
		case 'o':
			my_putstr(int_to_oct(variable));
			return(6);
			break;
		case 'X':
			my_putstr(int_to_hex_caps(variable));
			return(7);
			break;
		case '%':
			my_putchar('%');
			return(8);
			break;
		case 'x':
			my_putstr(int_to_hex_min(variable));
			return(9);
			break;
		case 'p':
			my_putstr("0x");
			my_putstr(long_to_hex(variable));
			return(10);
			break;
		case 'b':
			my_putstr(uns_to_bin(variable));
			return(11);
		default:
			my_putchar(str[i - 1]);
			my_putchar(str[i]);
			return(84);
			break;
	}
}

int	my_printf(char *str, ...)
{
	va_list args;
	va_start(args, str);
	int i = 0;

	while(str[i] != '\0') {
		if (str[i] != '%')
			my_putchar(str[i]);
	    	else {
	    		i = i + 1;
	    		detect_case_int(str, i, va_arg(args, long));
	    	}
	    	i = i + 1;
	}
	return(0);
}