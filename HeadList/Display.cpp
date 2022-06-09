#include "HeadList.h"


template <typename YourType>
int HeadLST<YourType>::getSize()
{
	return size;
}

template <typename YourType>
YourType& HeadLST<YourType>::operator[](const int index)
{
	int counter = 0;
	Element* current = head;
	while (current != nullptr)
	{
		if (counter == index) return current->data;
		current = current->next;
		counter++;
	}
}

template <typename YourType>
void HeadLST<YourType>::DisplayAll()
{
		
	Element* current = head;
	while (current != nullptr)
	{
		cout << " " << current->data;
		current = current->next;
	}
}


