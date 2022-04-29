/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:54:08 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/29 16:31:42 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
: _maxSize(0)
{
}

Span::Span(const unsigned int N)
: _maxSize(N)
{
	std::cout << "Constructor assigned with a size of " << N << std::endl;
}

void	Span::addNumber(const int n)
{
	try
	{
		if (_current <= _maxSize)
		{
			this->lst1.push_back(n);
			setCurrent();
		}
		else
		{
			throw std::exception();
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error of stack full : " << e.what() << std::endl;
	}
}

void	Span::ft_printlist()
{
	std::list<int>::iterator it = this->lst1.begin();

	while(it != this->lst1.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
}

const int	Span::getMaxSize()
{
	return(_maxSize);
}

const int	Span::getCurrent()
{
	return(_current);
}

void	Span::setCurrent()
{
	_current += 1;
}

const int	Span::shortestSpan()
{
	//exception if list size = 1;
	
	int shortest = INT_MAX;
	int modified = 0;
	std::list<int>::iterator cursor;
	cursor = lst1.begin();

	std::list<int>::iterator cursor2;
	cursor2 = lst1.begin();
	cursor2++;
	while (cursor != lst1.end())
	{
		std::cout << "ok" << std::endl;
		while (cursor2 != lst1.end())
		{
			if (/*std::abs(*cursor - *cursor2) != modified && */std::abs(*cursor - *cursor2) < shortest)
			{
				shortest = std::abs(*cursor - *cursor2);
				std::cout << "shortest = " << shortest << std::endl;
				modified = 1;
			}
			cursor2++;
			if (std::distance(lst1.begin(), cursor) == std::distance(lst1.begin(), cursor2))
				cursor2++;
//			std::cout << "distance = " << std::distance(lst1.begin(), cursor2) << std::endl;
		}
		cursor++;
		cursor2 = lst1.begin();
	}

	if (modified == 0)
	{
		std::cout << "No span to be found" << std::endl;
		return -1;
	}
	else
		return (shortest);


}

const int	Span::longestSpan()
{
	std::list<int>::iterator smallest;
	smallest = std::min_element(lst1.begin(), lst1.end());

	std::list<int>::iterator biggest;
	biggest = std::max_element(lst1.begin(), lst1.end());

	int small = *smallest;
	int big = *biggest;

	if (small != big)
	{
		return big - small;
	}
}