//Шарафутдинов Артем Сергеевич sharang36th@gmail.com

#include <tasks.hpp>

// Task 5.
bool name_is_even(const std::string& name) {
	// Дано название города. Определить, четно или нет количество символов в нем.
	if (name.size() % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
	// Даны две фамилии. Верните true, если первая длинее.
	if (name_one.size() > name_two.size())
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
	// Даны названия трех городов. Запишите в the_longest самое длинное, а самое короткое название в the_shortest.
	the_longest = name_one;
	the_shortest = name_one;

	if (name_two.size() > the_longest.size())
	{
		the_longest = name_two;
	}
	if (name_three.size() > the_longest.size())
	{
		the_longest = name_three;
	}

	if (name_two.size() < the_shortest.size())
	{
		the_shortest = name_two;
	}
	if (name_three.size() < the_shortest.size())
	{
		the_shortest = name_three;
	}
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
	// Дано слово. Получить его часть, образованную идущими подряд буквами, начиная с m-й и кончая n-й.
	// m и n считаем как номера букв, начиная с 1.
	if (m < 1)
	{
		m = 1;
	}
	if (n > (int)word.size())
	{
		n = (int)word.size();
	}
	if (m > n)
	{
		return "";
	}
	std::string result = "";
	for (int i = m - 1; i <= n - 1; i++)
	{
		result = result + word[i];
	}
	return result;
}

// Task 9.
void add_stars(std::string& word) {
	// Дано слово. Добавить к нему в начале и конце столько звездочек, сколько букв в этом слове.
	int len = (int)word.size();
	std::string stars = "";
	for (int i = 0; i < len; i++)
	{
		stars = stars + "*";
	}
	word = stars + word + stars;
}

// Task 10.
int percent_of_a(const std::string& word) {
	// Дано предложение. Определить долю (в %) букв 'a' в нем.
	if (word.size() == 0)
	{
		return 0;
	}
	int count_a = 0;
	for (int i = 0; i < (int)word.size(); i++)
	{
		if (word[i] == 'a')
		{
			count_a++;
		}
	}
	int percent = (count_a * 100) / (int)word.size();
	return percent;
}

// Task 11.
std::string replace_can(const std::string& new_word) {
	// Дано предложение "Can you can a can as a canner can can a can?".
	// Заменить все слова can на слово new_word.
	std::string sentence = "Can you can a can as a canner can can a can?";
	std::string result = "";
	std::string current = "";

	for (int i = 0; i < (int)sentence.size(); i++)
	{
		char ch = sentence[i];
		bool is_letter = false;
		if (ch >= 'A' && ch <= 'Z')
		{
			is_letter = true;
		}
		if (ch >= 'a' && ch <= 'z')
		{
			is_letter = true;
		}

		if (is_letter == true)
		{
			current = current + ch;
		}
		else
		{
			if (current == "can" || current == "Can")
			{
				result = result + new_word;
			}
			else
			{
				result = result + current;
			}
			current = "";
			result = result + ch;
		}
	}

	if (current.size() > 0)
	{
		if (current == "can" || current == "Can")
		{
			result = result + new_word;
		}
		else
		{
			result = result + current;
		}
	}

	return result;
}