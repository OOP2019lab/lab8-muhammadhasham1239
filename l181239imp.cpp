#include <iostream>
#include "l181239.h"
using namespace std;

Date::Date(){
	date=1;
	year=2000;
	month=1;
}

Date::Date(int m,int d,int y){
	if(d>0 && d<31){
	date=d;
	}else{
	Date();
	}
	if(m>0 && m<13){
	month=m;
	}
	else{
	Date();
	}
	if(y>999 && y<1001){
	year=y;
	}
	else{
	Date();
	}

}


bool Date::operator==(const Date a){
	bool A=false;
	bool B=false;
	bool C=false;
	bool result=false;

	if(this->date==a.date){
	A=true;
	}else{
	A=false;
	}
	if (this->month==a.month){
	B=true;
	}
	else{
	B=false;
	}
	if (this->year==a.year){
	C=true;
	}
	else{
	C=false;
	}
	if(A && B && C){
	return true;
	}else{
	return false;
	}
}

Date Date::operator+(int a){
	if(a<31){
	if(this->date+a<31){
	this->date=date+a;
	}else{
	this->month=month+1;
	this->date=(date+a)-30;
	}
	}else{
	cout<<"invalid addition to date,addition to date must be less than 31"<<endl;
	}
	return *this;
}

Date Date::operator=(const Date a){
	this->date=a.date;
	this->month=a.month;
	this->year=a.year;
	return *this;
}

Date Date::operator--(int a){
	Date q;
	q=*this;
	this->date=date--;
	return q;
}

Date Date::operator--(){
	this->date=--date;
	return *this;
}

int Date:: operator[](int a){
	Date A;
	A=*this;
	if(a==0){
	return this->date;
	}else{
		if(a==1){
		return this->month;
		}
		if(a==2){
		return this->year;
		}
	}
	
}