/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:23:13 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/27 13:40:05 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int a = 5;
	std::list<int>	lst1;
	lst1.push_front(a);
	std::cout << easyfind(lst1, 6);

}