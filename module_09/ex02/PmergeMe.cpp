#include "PmergeMe.hpp"

//VECTOR//////////////////////////////////////////////////////////////////

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

//LIST////////////////////////////////////////////////////////////////////

static void insertionSort(std::list<int>& lst, int start, int end) {

	for (int i = start; i < end; i++) {
		int temp = *std::next(lst.begin(), i + 1);
		int j = i + 1;
		while (j > start && *std::next(lst.begin(), j - 1) > temp) {
			*std::next(lst.begin(), j) = *std::next(lst.begin(), j - 1);
			j--;
		}
		*std::next(lst.begin(), j) = temp;
	}
}

static void merge(std::list<int>& lst, int start, int split, int end) {

	int Llen = split - start + 1;
	int Rlen = end - split;
	std::list<int> Lside(*std::next(lst.begin(), start), *std::next(lst.begin(), split + 1));
	std::list<int> Rside(*std::next(lst.begin(), split + 1), *std::next(lst.begin(), end + 1));
	int Lindex = 0;
	int Rindex = 0;
	for (int i = start; i <= end; i++) {
		if (Rindex == Rlen) {
			*std::next(lst.begin(), i) = *std::next(Lside.begin(), Lindex);
			Lindex++;
		} else if (Lindex == Llen) {
			*std::next(lst.begin(), i) = *std::next(Rside.begin(), Rindex);
			Rindex++;
		} else if (*std::next(Rside.begin(), Rindex) > *std::next(Lside.begin(), Lindex)) {
			*std::next(lst.begin(), i) = *std::next(Lside.begin(), Lindex);
			Lindex++;
		} else {
			*std::next(lst.begin(), i) = *std::next(Rside.begin(), Rindex);
			Rindex++;
		}
	}
}

void sort(std::list<int>& lst, int start, int end) {

	if (end - start > THRESHOLD) {
		int split = (start + end) / 2;
		sort(lst, start, split);
		sort(lst, split + 1, end);
		merge(lst, start, split, end);
	}
	else {
		insertionSort(lst, start, end);
	}
}
