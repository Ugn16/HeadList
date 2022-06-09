#pragma once
#ifndef HEADLST
#define HEADLST
 
#include <iostream>
using namespace std;

template <typename YourType> 
class HeadLST
{
	//template <typename YourType>
	class Element
	{
	public:
		YourType data;
		Element* next;

		Element(YourType data = 0, Element* next = nullptr) : data{data}, next{next}
		{
			//cout << " Consructor Element: " << this << endl;
		}
		~Element() 
		{
			//cout << Destructor Elements: " << this << endl;
		}
	};

	Element* head;
	int size;

public:
	HeadLST() : head{nullptr}, size{0}
	{
		//cout << " Consructor HeadLST: " << this << endl;
	};

	
	int getSize();
	YourType& operator[](const int index);
	void DisplayAll();

	void push_back(YourType data);
	void push_front(YourType data);
	void insert(YourType data, int index);

	void clear();
	void removeAt(int index);
	void pop_front();
	void pop_back();

	

	~HeadLST() 
	{
		//cout << Destructor Elements: " << this << endl;
		clear();
	};

};


#endif 
