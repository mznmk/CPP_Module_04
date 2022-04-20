/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:44:36 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 18:56:50 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"

// ================== [ public ] constructor / destructor =================== //

// -------------------------- default contsructor --------------------------- //

Animal::Animal()
{
    std::cout << "[Animal] Default constructor called" << std::endl;
    _type = "Animal";
}

// ---------------------------- copy contsructor ---------------------------- //

Animal::Animal(const Animal &animal)
{
    std::cout << "[Animal] Copy constructor called" << std::endl;
    _type = animal._type;
}

// ------------------------------- destructor ------------------------------- //

Animal::~Animal()
{
    std::cout << "[Animal] Destructor called" << std::endl;
}

// ========================== [ public ] operator =========================== //

// ------------------------ copy assignment operator ------------------------ //

Animal  &Animal::operator=(const Animal &animal)
{
    std::cout << "[Animal] Copy assignment operator called" << std::endl;
    if (this != &animal) {
        _type = animal._type;
    }
    return *this;
}

// =========================== [ public ] method ============================ //

/*!
** @brief   make sound (ex: dog -> bark )
*/
void    Animal::makeSound() const
{
    std::cout << "Animal <" << _type << "> \"...\"";
    std::cout << std::endl;
}

// ========================== [ public ] accessor =========================== //

const std::string   &Animal::getType() const
{
    return _type;
}


