/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 22:42:21 by kmeeseek          #+#    #+#             */
/*   Updated: 2022/06/17 00:20:03 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# define CONT_NUM 8

# include "Contact.class.hpp"
# include <string>
#include <iostream>
#include <sstream>

class Phonebook
{
	private:
		int _index;
		int _full;
		Contact _contact[CONT_NUM];

	public:
		void init_contacts();
		void add_new_contact();
		int print_contacts_table();
		static void print_contact_atribute(std::string);
		void print_index_cont(int i);
		int get_index();
		void set_full();
		int get_full();
		Phonebook(void);
		~Phonebook(void);
};

#endif