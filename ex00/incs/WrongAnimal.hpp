/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:44:07 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 19:37:51 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

// ================================ library ================================= //

# include <iostream>
# include <string>

// ================================= class ================================== //

class WrongAnimal
{
    protected:
        // [ attribute ]
        std::string         _type;

    public:
        // [ constructor / destructor ]
        WrongAnimal();
        WrongAnimal(const WrongAnimal &animal);
        virtual ~WrongAnimal();

        // [ operator ]
        WrongAnimal         &operator=(const WrongAnimal &animal);

        // [ method ]
        virtual void        makeSound() const;

        // [ accessor ]
        const std::string   &getType() const;

};

#endif
