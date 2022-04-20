/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:00:59 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 19:40:03 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/WrongAnimal.hpp"
#include "../incs/WrongCat.hpp"

int main()
{
    const Animal        *animal = new Animal();
    const Animal        *dog = new Dog();
    const Animal        *cat = new Cat();
    const WrongAnimal   *wrong = new WrongCat();

    std::cout << animal->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << wrong->getType() << " " << std::endl;

    animal->makeSound();
    dog->makeSound();
    cat->makeSound(); 
    wrong->makeSound(); 

    delete animal;
    delete dog;
    delete cat;
    delete wrong;

    // [ return ]
    return 0;
}