/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 14:26:37 by vlee              #+#    #+#             */
/*   Updated: 2018/01/14 18:57:25 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	door(int size)
{
	int d;
	int height; //how high a door you'll have to make
	int handle_height;

	d = 0; //will increment up to size of door
	height = size;
	handle_height = size / 2;
	//after printing the number of rows
	//print spaces = size
	//for h < size
	//while height > 0
		//print | = size
		//height--;
	//while current != to handle height
		//continue;
		//need to figure out how to place '$'
}
void	sastantua(int size)
{
	char start;
	char middle;
	char end;
	char next;
	int current; //the row we're currently printing
	int m;
	int spacing; //used to center the pyramid
	int width; //how wide the row is

	start = '/';
	middle = '*';
	end = '\\';
	next = '\n';
	current = 1;
	m = 0;
	spacing = '-';
	width = 0;
	while (current <= size)
	{
		while (width < size) //create proper spacing for the row?
		{
			ft_putchar(spacing);
			width++;
		}
		ft_putchar(start);
		//prints the astericks for the row
		while (m < current * 2 - 1)
		{
			ft_putchar(middle);
			m++;
		}
		ft_putchar(end);
		ft_putchar(next);
		m = 0;
		width = current; // gives correct spacing for the next row
		current++;
	}
	return;
}

// currently creates dynamic number of rows per the input i.e. size 10 = 10 rows
// needs to be size 1 = 3 rows, size 2 = 7 rows or 10 rows cut out 3 rows after first 3 rows

int	main(void)
{
	sastantua(10);
	return (0);
}
