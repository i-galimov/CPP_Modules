/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 17:25:46 by kmeeseek          #+#    #+#             */
/*   Updated: 2022/06/16 23:59:57 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		while (i++ < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				std::cout << toupper(argv[i][j]);
				j++;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
