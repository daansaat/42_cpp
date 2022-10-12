/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 11:11:16 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/12 11:11:20 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>

class Contact{
	
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
	public:
		void		set_info();
		std::string	get_fn(void);
		std::string	get_ln(void);
		std::string	get_nn(void);
		std::string	get_pn(void);
		std::string	get_ds(void);
};

#endif
