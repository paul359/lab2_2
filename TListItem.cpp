#include "TListItem.h"
#include <iostream>



TListItem::TListItem(const Kvad& kvad) {
 this->kvadr = kvad;
 this->next = nullptr;
 //std::cout << "lst item: created" << std::endl;
}
TListItem::TListItem(const TListItem& orig) {
 this->kvadr = orig.kvadr;
 this->next = orig.next;
// std::cout << "lst item: copied" << std::endl;
}
TListItem* TListItem::SetNext(TListItem* next) {
 TListItem* old = this->next;
 this->next = next;
 return old;
}
Kvad TListItem::GetKvad() const {
 return this->kvadr;
}
TListItem* TListItem::GetNext() {
 return this->next;
}
TListItem::~TListItem() {
// std::cout << "lst item: deleted" << std::endl;
 delete next;
}
std::ostream& operator<<(std::ostream& os, const TListItem& obj) {
 os << "[" << obj.kvadr << "]" << std::endl;
 return os;
}
