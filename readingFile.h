#ifndef READINGFILE_H
#define READINGFILE_H 
#include "WriteFile.h"
#include "settings.h"
class readingFile
{
public:

	Settings app;								// Осовные настройки для программы 
	fstream file;								// Исходный файл
	recording_and_write TTXX;					// База декодированнной информации
	readingFile(void);							// Конструктор по умолчанию
	~readingFile(void);
	void OpenFile_(void);
	void OpenDirPeriod(local_time start, local_time end);
	void outInfoFileDecodePeriod(int period);
	string MadeNameAeroindex( int period, const string _file );	// Создание имени для исходного файла
	void Read( void );							// Функция поиска данных
	void SelectionCipher( void) ;
	void outDataFile( void ); //Вывод исходных данных в файл
	bool FindDefectCipher(char * code);

	// Модуль тестирования с выводом сканируемых данных
	string outFile_name;		//Исходный файл
	string inFile_name;			//Выходной файл
	string dataFile_name;		// название файла + директроия с исходными данными
	fstream dataFile;			//Файл с отсортированными данными
};

#endif	// !READINGFILE_H 

