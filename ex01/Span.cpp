/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:54:08 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/27 14:14:09 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
}

Span::Span(const unsigned int N)
{
	std::cout << "Constructor assigned with a size of " << N ;
	lst1.resize(N);

}