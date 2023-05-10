/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:11:59 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/10 16:13:08 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_H
#define SCALAR_CONVERTER_H

#include <iostream>
#include <regex>
#include <string>
#include <iomanip>


class ScalarConverter // static class (only static members)
{
	public:
		static void convert(std::string string);

	private:
		ScalarConverter() {}
		~ScalarConverter() {}
};

#endif
