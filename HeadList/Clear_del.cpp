#include "HeadList.h"



template <typename YourType>
void HeadLST<YourType>::pop_front()
{
	Element* NewEl = head->next;
	delete head;
	head = NewEl;
	size--;
}

template <typename YourType>
void HeadLST<YourType>::pop_back()
{
	Element* NewEl = head;
	for (int i = 0; i < getSize()-2; i++)
	{
		NewEl = NewEl->next;
	}
	//Element* tmp = NewEl->next;
	NewEl->next = nullptr;
	//delete tmp;
	size--;
}

template <typename YourType>
void HeadLST<YourType>::clear()
{
	while(size)
	{
		pop_front();
	}
}

template <typename YourType>
void HeadLST<YourType>::removeAt(int index)
{
	Element* current = head;
	for (int i = 0; i < index - 1; i++)
	{
		current = current->next;
	}
	//Element* tmp = current->next;
	current->next = current->next->next;
	//delete tmp;
	
	size--;
	

}