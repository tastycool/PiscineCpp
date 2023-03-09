/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:23:29 by tberube-          #+#    #+#             */
/*   Updated: 2023/03/08 16:04:09 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			if (i != argc - 1)
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}