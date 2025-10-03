#include <iostream>
#include "Stock.h"
#include <fstream>
using namespace std;

int main() 
{
const int SIZE = 30;
Stock* stocks[SIZE] = {NULL};

   ifstream in("stocks.txt");
   if(!in) {
       cout << "stocks.txt not found";
       return 0;
   }


   string ticker;
   string company;
   double price;
   int i = 0;
   
   while (i < SIZE && in >> ticker >> company >> price) {
       stocks[i] = new Stock(ticker, price, company, 0);
       i++;
   }
   
   for (int j = 0; j<i; j++) {
       cout << stocks[j]->get_ticker() << " "
            << stocks[j]->get_company_name() << " "
            << stocks[j]->get_last_price() <<  endl;
   }
   
   for(int j = 0; j < i; j++){
       delete stocks[j];
   }

   return 0;
}
