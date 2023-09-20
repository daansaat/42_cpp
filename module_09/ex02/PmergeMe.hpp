#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <ctime>
# include <stdexcept>
# include <iostream>
# include <iomanip>
# include <list>
# include <vector>
# include <iterator>

# define THRESHOLD 16

void sort(std::vector<int>& vec, int p, int r);
void sort(std::list<int>& lst, int start, int end);

#endif