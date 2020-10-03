#include "person.h"

Person::Person()
{
    
}


void Person::set_name(string name){
    this->name = name;
}

void Person::add_gift(Gift* gift, float rank){
    string gift_name = gift->get_gift_name();
    if(gifts.find(gift_name) != gifts.end()) throw "Gift already exists!";
    // assocaite a gift with a particular ranking.
    gifts[gift_name].gift = gift;
    gifts[gift_name].rank = rank;
}

void Person::delete_gift(string name){
    if(gifts.find(name) == gifts.end()) throw "Gift does not exist";
    //remove gift
    gifts.erase(name);
}
