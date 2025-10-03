#include "Stock.h"
#include <iostream>

Stock::Stock(string Tick, double Last, string Company, int Shares): _ticker(Tick), _last_price(Last), _company_name(Company), _shares_owned(Shares)
{

}

void Stock::set_ticker(string Tick)
{
   _ticker = Tick;
}

void Stock::set_last_price(double Last)
{
   if(Last >= 0){
      _last_price = Last;
   } else {
      cout << "Invalid price";
      _last_price = 0;
   }
}

void Stock::set_company_name(string Company)
{
   _company_name = Company;
}

void Stock::set_shares_owned(int Shares)
{
   if(Shares >= 0){
      _shares_owned = Shares;
   }else{
      cout << "Invalid amount of shares owned"; 
      _shares_owned = 0;
  }
}

double Stock::get_holding_value() const
{
   return _last_price * _shares_owned;
}
