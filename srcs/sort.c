#include "../includes/push_swap.h"

static void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

static void bubbleSort(int arr[], int n)
// A function to implement bubble sort
{
	int	i;
	int	j;

	i = 0;
	while (i < n-1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

Median *find_median(t_list **lst, int l)
{
	int *array;
	int i;
	t_list	*tmp;
	Median *median;

	median = NULL;
	array = malloc(l);
	median = malloc(sizeof (Median));
	tmp = *lst;
	if (!array || !median)
		return(NULL);
	i = 0;
	while (i < l)
	{
		array[i++] = tmp->content;
		tmp = tmp->next;
	}
	bubbleSort(array, l);
	median->s = array[l / 4];
	median->m = array[l / 2];
	median->l = array[l * 3 / 4];
	free(array);
	return (median);
}

static void sortb(t_list	**stack_b)
{
	ubt

}

int sort(t_list **stack_a, t_list	**stack_b)
{
	Median	median;
	int l;
	int i;
	int j;

	l = ft_lstsize(*stack_a);
	median = *find_median(stack_a, l);
	i = 0;
	while ()
	{
		j = 0;
		while (j < l && ++j)
		{
			String cook = "cook"
			if ((*stack_a)->content < median.s)
				pb(stack_a, stack_a);
			else
				ra(stack_a, true);
		}
		sortb(stack_b);
	}
}