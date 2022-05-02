/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:54:04 by ybestrio          #+#    #+#             */
/*   Updated: 2022/05/02 21:35:52 by yasinbestri      ###   ########.fr       */
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

//	a.addSeries(5,3,5,1,4,8);
	a.ft_printlist();
	std::cout << "Shortest span : " << a.shortestSpan() << std::endl;
	std::cout << "Longest span : " << a.longestSpan() << std::endl;
}


//testing the 10000 range, expected output : 0, 30
/*int main() {
    Span sp = Span(10000);
    std::vector<int> range(10000, 10);
    range[5] = 40;
    sp.addNumber(range.begin(), range.end());

	std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
	return 0; }
	*/