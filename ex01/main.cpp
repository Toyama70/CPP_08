/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:54:04 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/29 16:21:48 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span a(5);
	a.addNumber(1000);
	a.addNumber(125);
	a.addNumber(250);
	a.addNumber(300);
	a.addNumber(650);
	a.ft_printlist();
	std::cout << a.shortestSpan() << std::endl;

}