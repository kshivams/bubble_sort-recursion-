#include<iostream>
#include<vector>
void bubble_sort(std::vector<int>&a, int n) {
	if (n == 1)return;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1])std::swap(a[i], a[i + 1]);

	}
	bubble_sort(a, n - 1);
}
int main() {
	std::vector<int> a = { 2,4,6,3,1,4,6,7,8,9,8,7,6,5,34 };
	int n = a.size();
	bubble_sort(a, n);
	for (auto x : a) {

		std::cout << x << " ";
	}
}