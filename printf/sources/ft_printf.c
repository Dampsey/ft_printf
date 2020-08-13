int 	ft_printf(const char *format, ...);
{
	int i;
	
	while (format[i] != '\0' && format[i] != '%')
	{
		ft_putchar(format[i]);
		i++;
	}
	if (format[i] == '%')
	{
		ft_convert(format);
	}
	if (format[i] == '\0')
	{
		return(tab.count);
	}
	return (0);
}
