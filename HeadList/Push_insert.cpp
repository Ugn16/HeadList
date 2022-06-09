#include "HeadList.h"


template <typename YourType>
void  HeadLST<YourType> ::push_back(YourType data)
{
	if (head == nullptr)
	{
		Element* newEl = new Element(data);
		head = newEl;
	}
	else 
	{
		Element* current = head;
		while (current->next != nullptr)
		{
			current = current->next;
		}
		current->next = new Element(data);
	}
	size++;
}

template <typename YourType>
void HeadLST<YourType>::push_front(YourType data)
{
	if (head == nullptr)
	{
		Element* NewEl = new Element(data);
		head = NewEl;
	}
	else
	{
		Element* Newhead = new Element(data);
		Newhead->next = head;
		head = Newhead;
	}
	size++;

}

template <typename YourType>
void HeadLST<YourType>::insert(YourType data, int index)
{
	if (index <= 0)
	{
		push_front(data);
	}
	else if (index >= size)
	{
		push_back(data);
	}
	else
	{
		int counter = 0;
		Element* Prev = head;
		
		while (Prev != nullptr)
		{
			Prev = Prev->next;
			if (counter == index - 1)
			{
				Element* NewEl = new Element(data);
				NewEl->next = Prev->next;
				Prev->next = NewEl;
			}
			
			counter++;
		}
		size++;
	}
	
}