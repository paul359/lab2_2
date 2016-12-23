#pragma once
#include <cstdlib>
#include <iostream>
#include "Kvad.h"
class TListItem {
public:
 TListItem(const Kvad& triangle);
 TListItem(const TListItem& orig);
 friend std::ostream& operator<<(std::ostream& os, const TListItem& obj);

 TListItem* SetNext(TListItem* next);
 TListItem* GetNext();
 Kvad GetKvad() const;
 virtual ~TListItem();
private:
 Kvad kvadr;
 TListItem *next;
};
