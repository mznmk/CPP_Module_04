/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:24:39 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 19:08:50 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"

// ================== [ public ] constructor / destructor =================== //

// -------------------------- default contsructor --------------------------- //

Dog::Dog() : Animal()
{
    std::cout << "[Dog] Default constructor called" << std::endl;
    _type = "Dog";
}

// ---------------------------- copy contsructor ---------------------------- //

Dog::Dog(const Dog &dog) : Animal()
{
    std::cout << "[Dog] Copy constructor called" << std::endl;
    _type = dog._type;
}

// ------------------------------- destructor ------------------------------- //

Dog::~Dog()
{
    std::cout << "[Dog] Destructor called" << std::endl;
}

// ========================== [ public ] operator =========================== //

// ------------------------ copy assignment operator ------------------------ //

Dog  &Dog::operator=(const Dog &dog)
{
    std::cout << "[Dog] Copy assignment operator called" << std::endl;
    if (this != &dog) {
        _type = dog._type;
    }
    return *this;
}

// =========================== [ public ] method ============================ //

/*!
** @brief   make sound (ex: dog -> bark )
*/
void    Dog::makeSound() const
{
    std::cout << "Dog <" << _type << "> \"wan! wan! wan!\"";
    std::cout << std::endl;
}
