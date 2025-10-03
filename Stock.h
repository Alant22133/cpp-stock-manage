#include <iostream>

using namespace std;

#pragma once

class Stock
{
public:
   Stock(string, double, string, int);

   void set_ticker(string);
   void set_last_price(double);
   void set_company_name(string);
   void set_shares_owned(int);

   string get_ticker() const
      {return _ticker; }
    double get_last_price() const
       {return _last_price; }
    string get_company_name() const
       {return _company_name; }
    int get_shares_owned() const
       {return _shares_owned; }
    double get_holding_value() const;
    
private:
   string _ticker;
   double _last_price;
   string _company_name;
   int _shares_owned;
};
