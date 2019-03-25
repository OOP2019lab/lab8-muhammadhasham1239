#include <iostream>
#include <cstring>
using namespace std;


class  Date{
	int date;
	int month;
	int year;

public:
	Date();
	Date(int date,int month,int year);
	friend ostream& operator<<(ostream& a,const Date b){
			static string monthNames[13] = { "", "January" , "February", "March", "April", "May","June", "July", "August","September", "October", "November", "December"} ;
		a << monthNames[b.month]<<","<< b.date <<"," <<b.year<<endl;
		return a;
	}

	friend istream& operator>>(istream &a,Date &b){
		cout<<"Enter date"<<endl;
		a>>b.date;
		cout<<"Enter month"<<endl;
		a>>b.month;
		cout<<"Enter year"<<endl;
		a>>b.year;
		return a;
	}

	 bool operator==(const Date a);
	 Date  operator+(int date);
	 Date operator=(const Date a);
	 Date operator--();
	 Date operator--(int a);
	 int operator[](int a);
};




