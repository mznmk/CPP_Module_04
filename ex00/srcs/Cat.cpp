/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:24:39 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 19:09:01 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

// ================== [ public ] constructor / destructor =================== //

// -------------------------- default contsructor --------------------------- //

Cat::Cat() : Animal()
{
    std::cout << "[Cat] Default constructor called" << std::endl;
    _type = "Cat";
}

// ---------------------------- copy contsructor ---------------------------- //

Cat::Cat(const Cat &cat) : Animal()
{
    std::cout << "[Cat] Copy constructor called" << std::endl;
    _type = cat._type;
}

// ------------------------------- destructor ------------------------------- //

Cat::~Cat()
{
    std::cout << "[Cat] Destructor called" << std::endl;
}

// ========================== [ public ] operator =========================== //

// ------------------------ copy assignment operator ------------------------ //

Cat  &Cat::operator=(const Cat &cat)
{
    std::cout << "[Cat] Copy assignment operator called" << std::endl;
    if (this != &cat) {
        _type = cat._type;
    }
    return *this;
}

// =========================== [ public ] method ============================ //

/*!
** @brief   make sound (ex: dog -> bark )
*/
void    Cat::makeSound() const
{
    std::cout << "Cat <" << _type << "> \"nya~! nya~! nya~!\"";
    std::cout << std::endl;
}
