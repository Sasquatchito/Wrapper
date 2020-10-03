#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include <map>
#include "gift.h"

using namespace std;
class Person
{
public:
    Person();

    //getters and setters
    void set_name(string name);
    void add_gift(Gift* gift_name, float rank);
    void change_rank(string gift_name, float rank);
    void delete_gift(string name);


private:
    string name;

    struct gift_preference{
        Gift* gift;
        float rank;
    };
    
    map<string, gift_preference> gifts;
};

#endif // PERSON_H
