#include "PmergeMe.hpp"

static void insertionSort(std::vector<int>& vec, int start, int end) {

	for (int i = start; i < end; i++) {
		int temp = vec[i + 1];
		int j = i + 1;
		while (j > start && vec[j - 1] > temp) {
			vec[j] = vec[j - 1];
			j--;
		}
		vec[j] = temp;
	}
}

static void merge(std::vector<int>& vec, int start, int split, int end) {

	int Llen = split - start + 1;
	int Rlen = end - split;
	std::vector<int> Lside(vec.begin() + start, vec.begin() + split + 1);
	std::vector<int> Rside(vec.begin() + split + 1, vec.begin() + end + 1);
	int Lindex = 0;
	int Rindex = 0;
	for (int i = start; i <= end; i++) {
		if (Rindex == Rlen) {
			vec[i] = Lside[Lindex];
			Lindex++;
		} else if (Lindex == Llen) {
			vec[i] = Rside[Rindex];
			Rindex++;
		} else if (Rside[Rindex] > Lside[Lindex]) {
			vec[i] = Lside[Lindex];
			Lindex++;
		} else {
			vec[i] = Rside[Rindex];
			Rindex++;
		}
	}
}

void sort(std::vector<int>& vec, int start, int end) {

	if (end - start > THRESHOLD) {
		int split = (start + end) / 2;
		sort(vec, start, split);
		sort(vec, split + 1, end);
		merge(vec, start, split, end);
	}
	else {
		insertionSort(vec, start, end);
	}
}
