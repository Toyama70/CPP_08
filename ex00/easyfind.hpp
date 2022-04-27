/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:32:59 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/27 13:40:19 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <map>
#include <list>
#include <iterator>


template<typename T>
int easyfind(T& one, int sch)
{
	typename T::iterator it = std::find(one.begin(), one.end(),sch);
	
	if (it != one.end())
			return (std::distance(one.begin(), it));
	else 
		return (-1);

}


#endif