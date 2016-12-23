#include "List.h"

TList::TList() : head(nullptr) {
}
TList::TList(const TList& orig) {
 head = orig.head;
}
std::ostream& operator<<(std::ostream& os, const TList& list) {
 TListItem *item = list.head;

 while(item!=nullptr)
 {
 os << *item;
 item = item->GetNext();
 }

 return os;
}
void TList::add(Kvad && kvadr,int num) {
	num--;
	TListItem *newIt = new TListItem(kvadr);
	if(head==nullptr)
	{

		newIt->SetNext(head);
		 head = newIt;
	}
	else
	{
		TListItem *curr = head;
		for(int i=1;(i<num) && (curr->GetNext()!=nullptr);i++)
		{
			curr=curr->GetNext();
			std::cout<<"here1"<< std::endl;
		}
	
		if(num == 0)
		{
			std::cout<<"here2"<< std::endl;
			newIt->SetNext(head);
			head = newIt;
		}
		else
		{
			std::cout<<"here3"<< std::endl;
			if(curr->GetNext()!=nullptr)
			{
				std::cout<<"here5"<< std::endl;
				newIt->SetNext(curr->GetNext());
				curr->SetNext(newIt);
			}
			else
			{
				std::cout<<"her00"<< std::endl;
			 curr->SetNext(newIt);
			
			}
		
		}
	}
	
}

bool TList::empty() {
 return head == nullptr;
}


void TList::dell(int num) {
	TListItem *curr = head;
	TListItem *ptr;
	Kvad result;
	
	for(int i=1;(i<num) && (curr->GetNext()!=nullptr);i++)
		{
			curr=curr->GetNext(); 
			 
		}
	if(curr!=nullptr)
	{
		
		if(curr==head)
		{
			head=head->GetNext(); 
			
			curr->GetKvad();

			curr->SetNext(nullptr);
			delete(curr);
			curr=head;
		}
		else
		{
			
			ptr=head;
			
			while(ptr->GetNext()!=curr)
				{
		
				ptr=ptr->GetNext();
			}
			ptr->SetNext(curr->GetNext());
			curr->GetKvad();

			curr->SetNext(nullptr);
			delete(curr);
		curr=ptr;
		
		}
	}

}

TList::~TList() {
	
	delete head;
	
}