#pragma once

#include <algorithm>
#include <cstdlib>
#include <vector>

template <typename T>
void quicksort(std::vector<T>& v);

template <typename T>
void quicksort_r(std::vector<T>& v, int s, int e);

template <typename T>
int partition(std::vector<T>& v, int s, int e);
