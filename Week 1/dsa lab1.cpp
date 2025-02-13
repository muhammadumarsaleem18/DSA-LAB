// #include<iostream>
// #include<math.h>
// using namespace std;
// class Complex
// {
// private:
// 	float re, im;
// public:
// 	Complex(float r, float i)
// 	{
// 		re = r;
// 		im = i;
// 	}
// 	Complex(float r)
// 	{
// 		re = r;
// 		im = 0.0;
// 	}
// 	~Complex()
// 	{}
// 	double Magnitude()
// 	{
// 		return sqrt(re * re + Imag() * Imag());
// 	}
// 	float Real()
// 	{
// 		return re;
// 	}
// 	float Imag()
// 	{
// 		return im;
// 	}
// 	Complex operator+(Complex b)
// 	{
// 		return Complex(re = b.re, im + b.im);
// 	}
// 	Complex operator=(Complex b)
// 	{
// 		re = b.re; im = b.im; return*this;
// 	}
// 	//operator overloading for multiplication 

// 	Complex operator*(Complex b)
// 	{
// 		return Complex(
// 			(re * b.re - im * b.im),
// 			(re * b.im + im * b.re)
// 		);
// 	}
// };
// int main()
// {
// 	Complex a(1.0, 2.0);
// 	Complex b(3.0, 4.0);
// 	Complex c = a * b;
// 	cout << "a= " << a.Real() << " + " << a.Imag() << "i" << endl;
// 	cout << "a= " << b.Real() << " + " <<b.Imag() << "i" << endl;
// 	cout << "Product is " << c.Real() << " + " << c.Imag() << "i" << endl;
// 	return 0;

// }

// #include<iostream>
// using namespace std;
// template<class T>
// T GetMax(T a, T b)
// {
// 	T result;
// 	result = (a > b) ? a : b;
// return(result);
// }
// int main() 
// {
// 	int i = 5, j = 6, k;
// 	long l = 10, m = 5, n;
// 	k = GetMax<int>(i, j);
// 	n = GetMax<long>(l, m);
// 	cout << k << endl << n;
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// template <class T>
// class mypair {
// 	T a, b;
// public:
// 	mypair(T first, T second) {
// 		a = first;
// 		b = second;
// 	}
// 	T getMin();
// };
// template<class T>
// T mypair<T>::getMin() {
// 	T min;
// 	min = a < b ? a: b;
// 	return min;
// }
// int main() {
// 	mypair<int> myobject(22, 43);
// 	cout << myobject.getMin();
// 	return 0;

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main() {
//     ifstream inFile("fin.txt");  // Open input file
//     ofstream outFile("fout.txt"); // Open output file

//     if (!inFile) {
//         cerr << "Error opening input file!" << endl;
//         return 1;
//     }

//     char ch;
//     int charCount = 0, wordCount = 0, sentenceCount = 0;
//     bool inWord = false;

//     while (inFile.get(ch)) {
//         outFile << ch;  // Write character to output file
//         charCount++;

//         // Count words
//         if (isspace(ch) || ch == '\n' || ch == '\t') {
//             if (inWord) {
//                 wordCount++;
//                 inWord = false;
//             }
//         } else if (isalpha(ch) || isdigit(ch)) {
//             inWord = true;
//         }
//   // Count sentences (based on '.', '!', '?')
//         if (ch == '.' || ch == '!' || ch == '?') {
//             sentenceCount++;
//         }
//     }

//     // If last word is not counted
//     if (inWord) {
//         wordCount++;
//     }

//     outFile << "\n\nCharacter count = " << charCount << endl;
//     outFile << "Word count = " << wordCount << endl;
//     outFile << "Sentence count = " << sentenceCount << endl;

//     inFile.close();
//     outFile.close();

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class House {
// public:
//     string owner;
//     string address;
//     int bedrooms;
//     double price;
// };

// void readHouseData(House &house) {
//     cout << "Enter Owner: ";
//     getline(cin, house.owner);
//     cout << "Enter Address: ";
//     getline(cin, house.address);
//     cout << "Number of Bedrooms?: ";
//     cin >> house.bedrooms;
//     cout << "Price: ";
//     cin >> house.price;
//     cin.ignore(); 
// }
// int main() {
//     House available[100];
//     int count = 0;
//     char choice;

//     do {
//         cout << "Enter details for house " << count + 1 << ":\n";
//         readHouseData(available[count]);
//         count++;

//         cout << "Enter another house? (Y/N): ";
//         cin >> choice;
//         cin.ignore(); 
//     } while ((choice == 'Y' || choice == 'y') && count < 100);

//     cout << "\nOwner\tAddress\tBedrooms\tPrice\n";
//     for (int i = 0; i < count; i++) {
//         cout << available[i].owner << "\t"
//              << available[i].address << "\t"
//              << available[i].bedrooms << "\t"
//              << available[i].price << "\n";
//     }

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <iomanip>

// using namespace std;

// class Student {
// private:
//     char name[30];
//     int* grades;
//     float average;

// public:
//     Student(int numGrades) {
//         grades = new int[numGrades]; 
//     }

//     ~Student() {
//         delete[] grades; 
//     }

//     void readData(ifstream &file, int numGrades) {
//         file >> ws; 
//         file.getline(name, 30); 
        
//         int sum = 0;
//         for (int i = 0; i < numGrades; i++) {
//             file >> grades[i];
//             sum += grades[i];
//  }
//         average = static_cast<float>(sum) / numGrades;
//     }

//     void displayData(int numGrades) const {
//         cout << left << setw(20) << name;
//         for (int i = 0; i < numGrades; i++) {
//             cout << setw(5) << grades[i];
//         }
//         cout << setw(8) << fixed << setprecision(2) << average << endl;
//     }

//     float getAverage() const { return average; }
//     const char* getName() const { return name; }
// };

// int main() {
//     string filename;
//     cout << "Enter the filename: ";
//     cin >> filename;

//     ifstream file(filename);
//     if (!file) {
//         cerr << "Error opening file!" << endl;
//         return 1;
//     }

//     int numStudents, numGrades;
// file >> numStudents >> numGrades;

    
//     Student** students = new Student*[numStudents];

//     for (int i = 0; i < numStudents; i++) {
//         students[i] = new Student(numGrades); /
//         students[i]->readData(file, numGrades);
//     }
    
//     file.close();

    
//     cout << "\nStudent Grades Table:\n";
//     cout << left << setw(20) << "Name";
//     for (int i = 1; i <= numGrades; i++) {
//         cout << setw(5) << "G" + to_string(i);
//     }
//     cout << setw(8) << "Avg" << endl;
//     cout << string(40, '-') << endl;

//     float classSum = 0, highest = 0, lowest = 100;
//     for (int i = 0; i < numStudents; i++) {
//         students[i]->displayData(numGrades);
//         classSum += students[i]->getAverage();
//         if (students[i]->getAverage() > highest) highest = students[i]->getAverage();
//         if (students[i]->getAverage() < lowest) lowest = students[i]->getAverage();
//     }

// float classAverage = classSum / numStudents;
//     cout << "\nClass Average: " << fixed << setprecision(2) << classAverage << endl;
//     cout << "Highest Average: " << highest << endl;
//     cout << "Lowest Average: " << lowest << endl;

    
//     cout << "\nStudents Below Class Average:\n";
//     for (int i = 0; i < numStudents; i++) {
//         if (students[i]->getAverage() < classAverage) {
//             cout << students[i]->getName() << " (" << students[i]->getAverage() << ")" << endl;
//         }
//     }

    
//     for (int i = 0; i < numStudents; i++) {
//         delete students[i];
//     }
//     delete[] students;

//     return 0;
// }




