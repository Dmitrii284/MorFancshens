#include <iostream>

int _X; // ������� ���������� ���������� ���������� (������������ ����� �����)
const double _P = 3.1416;// ���������� ���������
int _ARR[5]; //���������� ������ ����������� 0.

// ���������� ���������� �������� ���������� �� ����� ������� int _X;
void print_X() {

	std::cout << _X << std::endl; 
}
//����������� ����������
void uze_static() {
	static int a;
	std::cout << "a=" << a << std::endl;
	a++;// ��������� 2 �.� ����� ��������� ��� ����� a++;
	if (a > 5)
		a = 1;
}
// ��������� �� ���������
int power(int num1, int num2 = 2) { // �������� �� ��������� num2  � num2 = 2 
	//��� ������ ��� ������ std::cout << "5^2 = " << power(5) << '\n';
	int res = 1;
	for (int i = 0; i <= num2; i++)
		res *= num1;
	return 0;
}

//������������� �������
// ���������� �������� ������ ����� 
inline int absolute(int num){
return (num < 0 ? -num : num); //

}
// ��� ������ �������� !!!!
inline int sum_AB(int A, int B) {// ����� ����� � ��������� � �� �
	int sum = 0;
	for (int i = A; i <= B; i++)//���� ���� �������� �� � �� � �� ���������� for
		sum += i;
	return sum;
}

// ������������� �������
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
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2: num3);// ��������� � ��������� ������
	// �� ������ ��� �������� ������ ������!!!! (+) ��� ����� �������� ���� ������ � �����. 
	// �� ���� ���� ������ ����� IF else   �� �� �� �������� � ����� .. std::cout<<.....
}

// ��������� �������
template<typename T>
 T absol(T num) {
	return num < 0 ? -num : num;
}

 
 int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	// ��������� ����������
	
	/*//i =10 ������ ��� ������� ���������
	for (int i = 0; i < 5; i++){
		int x 
		std::cout << '*';
		x = 5;
	}*/

	//i =10 ������ ��� ������� ���������
	//X = 5 ������ ��� ������� ���������
	// ��� ���������� ����� ������ � {....} ����� ������ �������� ����� ��������� ����� � ��������.
	//std::cout << std::endl;

	//���������� ���������� 
	
	// ����� ���������� ����������
	/*print_X(); 
		_X = 7;
		print_X();
	
	*/

	// ����������� ���������� �����

	//uze_static();
	////std::cout << "a=" << a << std::endl;// ��� ��������� �����
	//for(int i =0;i < 10; i++)
	//	uze_static();
	// ��� ���������� � ����� �������� ������� �� �� ������ �� ���������.

	// ��������� �� ��������� �����

	/*std::cout << " 4^3 = " << power(4, 3) << '\n';
	std::cout << "5^2 = " << power(5) << '\n';// �� ������������ �������� �� ��������� int num2 = 2
	*/

	//������������� �������

	/*std::cout << "������� ������ -> ";
	std::cin >> n;
	std::cout << '|' << n << "| = " << absolute(n) << '\n';*/
	// ��� ������
	  //��� ������// �����  ����� ����� � ��������� � �� �
	//  ��� ������ ������ !!!std::cout << " ����� ����� �� 5-�� �� 10 "<< sum_AB(5, 10) << '\t';
		
	// ������������� �������

	/*std::cout << max(10, 15) << std::endl;// 15
	std::cout << max(5.7, 5.1) << std::endl; // 5.7
	std::cout << max(5, 8, 2) << std::endl;// 8
	*/


	// ��������� �������
	std::cout << absol(-7) << std::endl;//7
	std::cout << absol(8) << std::endl;//8
	std::cout << absol('f') << std::endl;//f

	return 0;
}