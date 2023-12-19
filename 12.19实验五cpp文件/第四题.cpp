//#include <iostream>
//using namespace std;
//class student
//{
//public:
//	student(long no, int grade);
//	long No;
//	int Grade;
//};
//student::student(long no, int grade)
//{
//	No = no;
//	Grade = grade;
//}
//void max(student* s1)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = i + 1; j < 5; j++)
//		{
//			if (s1[i].Grade < s1[j].Grade)
//			{
//				student temp(0, 0);
//				temp = s1[i];
//				s1[i] = s1[j];
//				s1[j] = temp;
//
//			}
//		}
//	}
//
//}
//
//int main()
//{
//
//	student s[] = { student(20,99),student(19,58), student(60,66), student(07,100), student(22,98), };
//	student* s1 = s;
//	max(s1);
//	cout << s1->No << endl;
//}