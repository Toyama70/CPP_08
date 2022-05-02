/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:54:11 by ybestrio          #+#    #+#             */
/*   Updated: 2022/05/02 21:31:47 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <map>
#include <list>
#include <iterator>
#include <algorithm>
#include <vector>
#include <array>


class Span
{

public:
	Span();
	Span(const unsigned int N);
	~Span();
	Span(Span & other);
	Span& operator=(Span & rhs);
	
	
	int				getMaxSize();
	int		getCurrent();
	std::list<int>	getList();

	void		initCurrent();
	void		setCurrent();

	long long	shortestSpan();
	long long	longestSpan();
	void		addNumber(const int n);
	void		ft_printlist();
	void		addSeries(int n, ...);
  
	template <class iterator>
	void	addNumber(iterator begin, iterator end)
	{
		if ((end - begin) <= _maxSize)
		{
			std::copy(begin, end, std::back_inserter(lst1));
			_current += (end - begin);
		}
	}
 

private:
	std::list<int>	lst1;
	int		_maxSize;
	int				_current;

};



#endif