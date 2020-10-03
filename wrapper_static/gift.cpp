#include "gift.h"



void Gift::set_id(int id){
    this->gift_id = id;
}

void Gift::set_price(float price){
    this->price = price;
}

void Gift::set_gift_name(string gift_name){
    this->gift_name = gift_name;
}

int Gift::get_id(){
    return gift_id;
}

float Gift::get_price(){
    return price;
}
string Gift::get_gift_name(){
    return gift_name;
}

float Gift::get_rating(string retail_name){
    if(retails.find(retail_name) == retails.end()) throw "Retailer not found";
    return retails[retail_name].rating;
}

float Gift::get_price(string retail_name){
    if(retails.find(retail_name) == retails.end()) throw "Retailer not found";
    return retails[retail_name].price;
}

int Gift::get_review_num(string retail_name){
    if(retails.find(retail_name) == retails.end()) throw "Retailer not found";
    return retails[retail_name].reviews;
}

string Gift::get_img_url(string retail_name){
    if(retails.find(retail_name) == retails.end()) throw "Retailer not found";
    return retails[retail_name].img_url;
}

string Gift::get_gift_url(string retail_name){
    if(retails.find(retail_name) == retails.end()) throw "Retailer not found";
    return retails[retail_name].gift_url;
}

void Gift::add_retailer(string retail_name, retailer* retailer){
    //if retailer exists, return
    if(retails.find(retail_name) != retails.end()){
        return;
    }
    retailers.push_back(retail_name);
    retail_gift_data r;
    r.retail = retailer;
    retails[retail_name] = r;
}

void Gift::remove_retailer(string retail){
    if(retails.find(retail) == retails.end()) throw "Retailer not found";
    retails.erase(retail);
}

