/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:54:11 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/29 13:04:51 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <map>
#include <list>
#include <iterator>
#include <algorithm>

class Span
{

public:
	Span();
	Span(const unsigned int N);
	void	addNumber(const int n);
	void	ft_printlist();

	const int	getMaxSize();
	const int	getCurrent();

	void		setCurrent();

	const int	shortestSpan();
	const int	longestSpan();
	

private:
	std::list<int>	lst1;
	const int		_maxSize;
	int				_current;

};



#endif