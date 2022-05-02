/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:54:08 by ybestrio          #+#    #+#             */
/*   Updated: 2022/05/02 21:35:16 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdarg.h>

Span::Span()
: _maxSize(0)
{
	initCurrent();
}

Span::Span(const unsigned int N)
: _maxSize(N)
{
	initCurrent();
}

Span::~Span()
{

}

Span& Span::operator=(Span & rhs)
{
	if (this == &rhs)
		return (*this);
	_maxSize = rhs.getMaxSize();
	lst1 = rhs.getList();
	return (*this);	
}


Span::Span(Span & other) : _maxSize(other.getMaxSize()), lst1(other.getList())
{
    return ;
}

std::list<int>	Span::getList()
{
	return lst1;
}

void	Span::addSeries(const int n, ...)
{
	/* First argument is the amount of numbers to be added, after that
	are the numbers to be added to the list. */
	
	if (n <= 0) 
	{	
		std::cerr << "Series can't be that small" << std::endl;
		return;
	}
	if (n == 1) 
	{	
		std::cerr << "Use addNumber function instead" << std::endl;
		return;
	}
	if (_current == _maxSize)
	{	
		std::cerr << "Stack is already full" << std::endl;
		return;
	}


	va_list all;
	int size = n;
	va_start(all, n);
		while(size > 0 && _current <= _maxSize)
		{
			this->lst1.push_back(va_arg(all, int));
			setCurrent();
			size--;
		}
	try 
	{
		if (size != 0)
			throw std::exception();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << " : stack is full, no more space" << std::endl;
	}
	va_end(all);
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
	int i = 0;
	std::list<int>::iterator it = this->lst1.begin();

	while(it != this->lst1.end() && i < this->getCurrent())
	{
		std::cout << *it << std::endl;
		it++;
		i++;
	}
}

void	Span::initCurrent()
{
	_current = 0;
}

int	Span::getMaxSize()
{
	return(_maxSize);
}

int	Span::getCurrent()
{
	return(_current);
}

void	Span::setCurrent()
{
	_current += 1;
}

long long	Span::shortestSpan()
{
	//exception if list size = 1;
	try
	{
		if (_current <= 1)
		{
			throw std::exception();
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << " : stack size error." << std::endl;
		return -1;
	}

	int shortest = INT_MAX;
	int modified = 0;
	int tempval;
	int dist1 = 0;
	int dist2 = 0;
	std::list<int>::iterator cursor;
	cursor = lst1.begin();

	std::list<int>::iterator cursor2;
	cursor2 = lst1.begin();
	cursor2++;
	dist2++;

	while (cursor != lst1.end())
	{
		while (cursor2 != lst1.end())
		{
			if (*cursor - *cursor2 < 0)
				tempval = (*cursor - *cursor2) * -1;
			else
				tempval = (*cursor - *cursor2);
			if (tempval < shortest)
			{
				shortest = tempval;
				modified = 1;
			}
			cursor2++;
			dist2++; 
			if (dist1 == dist2)
			{
				cursor2++;
				dist2++; 
			}
		}
		cursor++;
		dist1++;
		cursor2 = lst1.begin();
		dist2 = 0;
	}

	if (modified == 0)
	{
		std::cout << "No span to be found" << std::endl;
		return -1;
	}
	else
		return (shortest);


}

long long 	Span::longestSpan()
{
	try
	{
		if (_current <= 1)
		{
			throw std::exception();
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << " : stack size error." << std::endl;
		return -1;
	}
	
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
	else 
		return (0);
}