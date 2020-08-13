int	ft_printf(const char *format, ...);
{
	int	i;
	va_list list;
	t_tab	t;

	va_start(list, format);
	while (format[t.i] != '\0' && format[t.i] != '%')
	{
		ft_putchar(format[t.i]);
		t.count++;
		t.i++;
	}
	if (format[t.i] == '%')
	{
		ft_analyze(&format, &t);
	}
	if (format[t.i] == '\0')
	{
		return(t.count);
	}
	return (-1);
}
