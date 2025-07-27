// Что программа должна делать?
//		1. принять 3 параметра: filename, s1, s2
//		2. открыть файл <filename>
//		3. создать новый файл <filename>.replace
//		4. заменить все вхождения s1 на s2
//		5. записать результат в новый файл
// Пример использования:
//		./file_copy input.txt "old" "new"
//		создаст input.txt.replace с замененными строками
// Основные шаги:
//		1. проверить аргументы командной строки
//		2. открыть входной файл для чтения
//		3. создать выходной файл для записи
//		4. построчно читать и заменять s1 на s2
//		5. записать результат в новый файл
#include <iostream>
#include <fstream>
#include <string>

int main (int ac, char *av[]) {
	if (ac != 4) {
		std::cout << "Usage ./file_copy <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	// открытие входного файла для чтения
	//		1. создаем поток для чтения + автоматически пытается открыть файл с именем filename
	std::ifstream inputFile(filename);
	//		2. проверяем, успешно ли открылся файл (если файл не существует или нет прав - выводим ошибку)
	if (!inputFile) {
		std::cout << "Error: Cannot open file " << filename << std::endl;
		return 1;
	}
	// создание выходного файла для записи
	//		1. создаем имя нового файла
	std::string outputFilename = filename + ".replace";
	//		2. создаем поток для записи + автоматически создает новый файл
	std::ofstream outputFile(outputFilename);
	if (!outputFile) {
		std::cout << "Error: Cannot create file " << outputFilename << std::endl;
		return 1;
	}
	// чтение всего файла (вместо построчного!) - гарантирует все замены (построчно можно пропустить замены на границах строк)
	std::string content;
	std::string line;
	// читаем файл построчно с помощью getline
	// в результате весь файл будет в переменной content как одна большая строка
	while (std::getline(inputFile, line)) {
		// добавляем каждую строку в общий content
		content += line + "\n"; // добавляем символ новой строки, т.к. getline его удаляет
	}
	// найти первое вхождение s1 - find()
	// взять часть строки от начала до позиции - substr()
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos) {
		std::string before = content.substr(0, pos);
		std::string after = content.substr(pos + s1.length());
		content = before + s2 + after;
		pos += s2.length(); // обновление позиции
	}
	// записать обработанный content в выходной файл
	outputFile << content;

	return 0;
}
