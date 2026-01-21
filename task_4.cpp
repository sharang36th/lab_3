//Шарафутдинов Артем Сергеевич sharang36th@gmail.com

#include <tasks.hpp>

// Task 4.
void remove_negative(std::vector<int>& input) {
	// Удалить из массива: первый отрицательный элемент (если отрицательные элементы в массиве есть).
	int pos = -1;
	for (int i = 0; i < (int)input.size(); i++)
	{
		if (input[i] < 0)
		{
			pos = i;
			break;
		}
	}
	if (pos == -1)
	{
		return;
	}
	input.erase(input.begin() + pos);
}

void remove_last_even(std::vector<int>& input) {
	// Удалить из массива: удалить последний четный элемент (если четные элементы в массиве есть).
	int pos = -1;
	for (int i = (int)input.size() - 1; i >= 0; i--)
	{
		if (input[i] % 2 == 0)
		{
			pos = i;
			break;
		}
	}
	if (pos == -1)
	{
		return;
	}
	input.erase(input.begin() + pos);
}
