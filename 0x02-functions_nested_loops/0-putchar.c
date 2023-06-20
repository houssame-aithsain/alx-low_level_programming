/**
	* main - is the main "function"
	* @put:
	* @i:
	* Return: it  return "0"
*/
int main(void)
{
	char put[] = "_putchar";
	int i;

	i = 0;
	while (put[i])
		_putchar(put[i++]);
	_putchar('\n');
	return (0);
}
