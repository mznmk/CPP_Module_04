/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:44:07 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 16:45:26 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

// ================================ library ================================= //

# include <iostream>
# include <string>

// ================================= class ================================== //

class Animal
{
    protected:
        // [ attribute ]
        std::string         _type;

    public:
        // [ constructor / destructor ]
        Animal();
        Animal(const Animal &animal);
        virtual ~Animal();

        // [ operator ]
        Animal  &operator=(const Animal &animal);

        // [ method ]
        virtual void        makeSound() const;

        // [ accessor ]
        const std::string   &getType() const;

};

#endif
