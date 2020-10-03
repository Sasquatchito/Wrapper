#ifndef GIFT_H
#define GIFT_H

#include <string>
#include <vector>
#include <map>
#include <QtCore>

#include "retailer.h"

using namespace std;


class Gift: public QObject{

Q_OBJECT

signals:
    void price_change(float new_price);
    void gift_available(bool availability);
    void ratings_changed(float new_ratings);
    void image_changed(string img_url);

public:
    Gift(){};
    //setters
    void set_id(int gift_id);
    void set_price(float price);
    void set_gift_name(string gift_name);

    //getters
    int get_id();
    float get_price();
    string get_gift_name();

    //retail modifiers
    void add_retailer(string retail_name, retailer* retiail);
    void remove_retailer(string retail_name);

    //url modifiers
    void add_gift_url(string retail_name, string url);
    string get_gift_url(string retail_name);


    //retreive retail specific data
    float get_price(string retail_name);
    string get_img_url(string retail_name);
    string get_review_url(string retail_name);
    int get_quantitiy(string retail_name);
    float get_rating(string ratail_name);
    int get_review_num(string retail_name);

    // vector that will store references to retail plugins
    vector<string> get_retailers();


private:
    int gift_id;
    string gift_name;
    float price = 0.0f;
    bool sold_out = false;
    vector<string> retailers;
    struct retail_gift_data{
        retailer* retail;
        string gift_url;
        string review_url;
        string img_url;
        float price;
        int quantity;
        float rating;
        int reviews;
    };
    map<string, retail_gift_data> retails;


};

#endif // GIFT_H
