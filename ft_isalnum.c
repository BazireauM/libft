int	isalnum(int character)
{
	if (character >= 'a' && character <='z')
		return (1);
	else if (character >= 'A' && character <= 'Z')
		return (1);
	else if (character >= '1' && character <= '9')
		return (1);
	else
		return (0);
}
