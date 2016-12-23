#pragma once

#pragma once
#include "Kvad.h"
#include "TListItem.h"
class TList
{
public:
	TList();
	TList(const TList& orig);
	void add(Kvad &&kvad, int num);
	void dell(int num);
	friend std::ostream& operator<<(std::ostream& os,const TList& list);
	bool empty();
	
	virtual ~TList();
private:
		TListItem *head;

};


