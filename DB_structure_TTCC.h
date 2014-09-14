#ifndef DB_STRUCTURE_TTCC_H
#define DB_STRUCTURE_TTCC_H 
#include <list>
#include "General_data.h"
using namespace std;

class TTCC_Database                     // класс для хранения и обработки данных из кода TTCC
{
public:
	bool information;                   // Отсутствие информации
	DATA_TIME memory;                   // Данные о времени и дате запуска и + индентификатор
	int number;                         // Данные о територии запуска зонда и станции 
	list<standardSurface> level;        // Стандартные уровни 70 50 40 30 20 10
	//list<surface> tropopause;           // Сведения о тропопаузе 88
	//list<surfaceWind> max_wind;         // Сведения о максимальном ветре 77 66 
	//list<WIND_SHIFT> vertical;          // Сведения о вертикальном сдвиге ветра 4
	bool operator== (const TTCC_Database & right) 
	{
		int m = right.number;
		int n = number;
		return n == m;
	} ;
	bool operator!= (const TTCC_Database & right) 
	{
		int m = right.number;
		int n = number;
		return n != m;
	} ;
	bool operator< (const TTCC_Database & right) 
	{
		int m = right.number;
		int n = number;
		return n < m;
	} ;
};

class DateSurfase_TTCC{
public:
	int date;
	int time;
	list<TTCC_Database> data_;			//Дни 00 или 12
	bool operator< (const DateSurfase_TTCC & right) 
	{
		return date < right.date;
	} ;
};
#endif // !DB_STRUCTURE_TTCC_H