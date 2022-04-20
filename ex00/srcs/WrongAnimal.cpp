/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:44:36 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 18:56:50 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongAnimal.hpp"

// ================== [ public ] constructor / destructor =================== //

// -------------------------- default contsructor --------------------------- //

WrongAnimal::WrongAnimal()
{
    std::cout << "[WrongAnimal] Default constructor called" << std::endl;
    _type = "WrongAnimal";
}

// ---------------------------- copy contsructor ---------------------------- //

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
    _type = animal._type;
}

// ------------------------------- destructor ------------------------------- //

WrongAnimal::~WrongAnimal()
{
    std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

// ========================== [ public ] operator =========================== //

// ------------------------ copy assignment operator ------------------------ //

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
    std::cout << "[WrongAnimal] Copy assignment operator called" << std::endl;
    if (this != &animal) {
        _type = animal._type;
    }
    return *this;
}

// =========================== [ public ] method ============================ //

/*!
** @brief   make sound (ex: dog -> bark )
*/
void        WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal <" << _type << "> \"...\"";
    std::cout << std::endl;
}

// ========================== [ public ] accessor =========================== //

const std::string   &WrongAnimal::getType() const
{
    return _type;
}


