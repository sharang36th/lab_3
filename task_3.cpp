//Шарафутдинов Артем Сергеевич sharang36th@gmail.com

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
	// Дан одномерный массив из 20 элементов.
	// Переставить первые три и последние три элемента, сохранив порядок их следования.
	if ((int)input.size() < 6)
	{
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		int temp = input[i];
		input[i] = input[(int)input.size() - 3 + i];
		input[(int)input.size() - 3 + i] = temp;
	}
}
