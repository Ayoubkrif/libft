/* striteri, strmapi , ft_putstr_fd*/
void	ft_capitalize(unsigned int i, char *c)
{
	(void)i;
	*c = ft_tolower(*c);
}

char	*ft_capitalizer(unsigned int i, char *c)
{
	(void)i;
	*c = ft_tolower(*c);
	return (*c);
}

int	main(int a, char **c)
{
	int i = 0;
	(void)a;
	ft_striteri(c[1], &ft_capitalize);
	ft_putstr_fd(c[1], 1);
	char *s = ft_strmapi(c[2], &ft_capitalizer);
	ft_putstr_fd(s, 1);
	free(s);
}

/*ft_atoi, isalnum, isalpha, isacii, isdigit, isprint, tolower, toupper, ft_putnbr_fd*/
int	main(int a, char **c)
{
	ft_putnbr_fd();
}
void	ft_del(void *content)
{
	printf("%s\n", (char *)content);
	ft_bzero(content,1 + ft_strlen((char *)content);
}
void	ft_printcontent(void *content)
{
	ft_putstr_fd((char *)content, 1);
}

void	*capitalize(void *content)
{
	int i = 0;
	while (((char *)content)[i])
	{
		((char *)content)[i] = ft_toupper(((char *)content)[i]);
		i++;
	}
	return (content);
}

/* faire ft_del a tout prix demainmatin*/

int	main(int a, char **c)
{
	t_list	a;
	t_list	b;
	t_list	c;

	a = ft_lstnew((void *)c[1]);
	b = ft_lstnew((void *)c[2]);
	c = ft_lstnew((void *)c[3]);
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	ft_putnbr_fd(ft_lstsize(a));
	ft_lstdelone(c);
	b->next = NULL;
	ft_lstmap();
}
