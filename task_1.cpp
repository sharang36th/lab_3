//Шарафутдинов Артем Сергеевич sharang36th@gmail.com

#include <tasks.hpp>


// Task 1.
void multi_2(std::vector<int>& input) {
	// Дан массив. Все его элементы: увеличить в 2 раза.
	for (int i = 0; i < (int)input.size(); i++)
	{
		input[i] = input[i] * 2;
	}
}

void reduce_a(std::vector<int>& input, int a) {
	// Дан массив. Все его элементы: уменьшить на число a.
	for (int i = 0; i < (int)input.size(); i++)
	{
		input[i] = input[i] - a;
	}
}

void div_on_first(std::vector<int>& input) {
	// Дан массив. Все его элементы: разделить на первый элемент.
	if (input.size() == 0)
	{
		return;
	}

	if (input[0] == 0)
	{
		return;
	}

	int first = input[0];
	for (int i = 0; i < (int)input.size(); i++)
	{
		input[i] = input[i] / first;
	}
}
