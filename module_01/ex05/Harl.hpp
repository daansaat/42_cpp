#ifndef HARL_HPP
# define HARL_HPP

class	Harl {
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	public:
		void	complain(std::string level);
};

#endif