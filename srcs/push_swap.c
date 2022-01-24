#include "../libft/libft.h"

int main(int argc, char **argv)
{

	t_list	**stack_a;
	//t_list **stack_b;
	int i;

	stack_a = NULL;
	i = 0;
	if (argc < 2)
		return(0);
	while (argv)
	{
		ft_lstadd_front(stack_a, ft_lstnew(ft_atoi(argv[i++])));
	}



}
