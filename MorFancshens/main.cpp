#include <iostream>

int _X; // Сначало обозначаем глобальную переменную (Использовать можно везде)
const double _P = 3.1416;// Глобальная констатна
int _ARR[5]; //Глобальный массив заполненный 0.

// Глобальная переменная Объявили переменную до самой функции int _X;
void print_X() {

	std::cout << _X << std::endl; 
}
//Статическая переменная
void uze_static() {
	static int a;
	std::cout << "a=" << a << std::endl;
	a++;// Выведется 2 т.к после окончания еще стоит a++;
	if (a > 5)
		a = 1;
}
// Параметры по умолчанию
int power(int num1, int num2 = 2) { // параметр по умолчанию num2  и num2 = 2 
	//При выводе она поймет std::cout << "5^2 = " << power(5) << '\n';
	int res = 1;
	for (int i = 0; i <= num2; i++)
		res *= num1;
	return 0;
}

//Встраивамемые функции
// Возвращаем значения модуля числа 
inline int absolute(int num){
return (num < 0 ? -num : num); //

}
// Так Нельзя выводить !!!!
inline int sum_AB(int A, int B) {// Сумма чисел в диапазоне А до В
	int sum = 0;
	for (int i = A; i <= B; i++)//Если есть Диапазон от А до В то используем for
		sum += i;
	return sum;
}

// Перегруженнфе функции
int max(int num1, int num2) {
	std::cout << "INT\n";
	return (num1 > num2 ? num1 : num2);
}

double max(double num1, double num2) {
	std::cout << "DOUBLE\n";
	return (num1 > num2 ? num1 : num2);
}
//void max(double num1, double num2) {
//	std::cout << (num1 > num2 ? num1 : num2) << "\n";
//}

int max(int num1, int num2,int num3) {
	std::cout << "THREE INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2: num3);// Тернарный в тернарном НЕЛЬЗЯ
	// Не понять что написано сложно понять!!!! (+) Это можно встроить куда угодно в вывод. 
	// По идее надо писать через IF else   Но ее не вставить в ВЫВОД .. std::cout<<.....
}

// Шаблонная функция
template<typename T>
 T absol(T num) {
	return num < 0 ? -num : num;
}

 
 int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	// Локальная переменная
	
	/*//i =10 Ошибка вне области видимости
	for (int i = 0; i < 5; i++){
		int x 
		std::cout << '*';
		x = 5;
	}*/

	//i =10 Ошибка вне области видимости
	//X = 5 Ошибка вне области видимости
	// Эти переменные видны только в {....} после каждой итерации цикла создаются вновь и исчезают.
	//std::cout << std::endl;

	//Глобальная переменная 
	
	// Вывод глобальной переменной
	/*print_X(); 
		_X = 7;
		print_X();
	
	*/

	// Статическая переменная Вывод

	//uze_static();
	////std::cout << "a=" << a << std::endl;// Это ошибочный вывод
	//for(int i =0;i < 10; i++)
	//	uze_static();
	// Она отработает в нашей функциив скобках но Но просто не удаляется.

	// Параметры по умолчанию Вывод

	/*std::cout << " 4^3 = " << power(4, 3) << '\n';
	std::cout << "5^2 = " << power(5) << '\n';// Мы использовали параметр по умолчанию int num2 = 2
	*/

	//Встраивамемые функции

	/*std::cout << "Введите чтисло -> ";
	std::cin >> n;
	std::cout << '|' << n << "| = " << absolute(n) << '\n';*/
	// Так нельзя
	  //Так нельзя// Вывод  Сумма чисел в диапазоне А до В
	//  Так нельзя делать !!!std::cout << " Сумма чисел от 5-ти до 10 "<< sum_AB(5, 10) << '\t';
		
	// Перегруженнфе функции

	/*std::cout << max(10, 15) << std::endl;// 15
	std::cout << max(5.7, 5.1) << std::endl; // 5.7
	std::cout << max(5, 8, 2) << std::endl;// 8
	*/


	// Шаблонная функция
	std::cout << absol(-7) << std::endl;//7
	std::cout << absol(8) << std::endl;//8
	std::cout << absol('f') << std::endl;//f

	return 0;
}