//Шарафутдинов Артем Сергеевич sharang36th@gmail.com

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
	// Определить: сумму всех элементов массива.
	int s = 0;
	for (int i = 0; i < (int)input.size(); i++)
	{
		s = s + input[i];
	}
	return s;
}

int square_sum(const std::vector<int>& input) {
	// Определить: сумму квадратов всех элементов массива.
	int s = 0;
	for (int i = 0; i < (int)input.size(); i++)
	{
		s = s + input[i] * input[i];
	}
	return s;
}

int sum_six(const std::vector<int>& input) {
	// Определить: сумму шести первых элементов массива.
	int s = 0;
	int limit = 6;
	if ((int)input.size() < 6)
	{
		limit = (int)input.size();
	}
	for (int i = 0; i < limit; i++)
	{
		s = s + input[i];
	}
	return s;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
	// Определить: сумму элементов массива с k1-го по k2й.
	// k1 и k2 считаем как номера элементов, начиная с 1.
	if ((int)input.size() == 0)
	{
		return 0;
	}
	if (k1 < 1)
	{
		k1 = 1;
	}
	if (k2 > (int)input.size())
	{
		k2 = (int)input.size();
	}
	if (k1 > k2)
	{
		return 0;
	}
	int s = 0;
	for (int i = k1 - 1; i <= k2 - 1; i++)
	{
		s = s + input[i];
	}
	return s;
}

int mean(const std::vector<int>& input) {
	// Определить: среднее арифметическое всех элементов массива.
	if ((int)input.size() == 0)
	{
		return 0;
	}
	int s = sum(input);
	return s / (int)input.size();
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
	// Определить: среднее арифметическое элементов массива с s1-го по s2-й.
	// s1 и s2 считаем как номера элементов, начиная с 1.
	if ((int)input.size() == 0)
	{
		return 0;
	}
	if (s1 < 1)
	{
		s1 = 1;
	}
	if (s2 > (int)input.size())
	{
		s2 = (int)input.size();
	}
	if (s1 > s2)
	{
		return 0;
	}
	int s = sum_k(input, s1, s2);
	int count = s2 - s1 + 1;
	return s / count;
}
