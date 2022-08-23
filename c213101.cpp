#include <bits/stdc++.h>
using namespace std;
class Product
{
    public:
    string Product_ID;
    string Product_Category,Product_Name;
    void rd()
    {
      ifstream p("productIn.txt");
      p.ignore();
      getline(p,Product_ID);
      getline(p,Product_Category);
      getline(p,Product_Name);
    }
    void od()
    {
      ofstream o("productOut.txt");
      o<<Product_ID<<endl<<Product_Category<<endl<<Product_Name<<endl;
    }

};
class SoldProduct : public Product
{
  public:
    string Customer_ID,Customer_Category;
    void sold_readdata()
    {
      ifstream pp("customerIn.txt");
      pp.ignore();
      getline(pp,Customer_ID);
      getline(pp,Customer_Category);
    }
    void sold_writedata()
    {
      ofstream oo("customerOut.txt");
      oo<<Customer_ID<<endl<<Customer_Category<<endl;
    }

};
class BoughtProduct: public Product
{
  public:
  string Buyer_ID,Buyer_Name;
  int Buyer_price;
  void buy_readdata()
  {
    ifstream po("buyerIn.txt");
    po.ignore();
    getline(po,Buyer_ID);

    getline(po,Buyer_Name);
    po>>Buyer_price;
  }
  void buy_writedata()
  {
    ofstream ok("buyerOut.txt");
    ok<<Buyer_ID<<endl<<Buyer_Name<<endl<<Buyer_price<<endl;
  }
};
int main()
{
    Product p;
    SoldProduct sp;
    BoughtProduct bp;
    p.rd();
    p.od();
    sp.sold_readdata();
    sp.sold_writedata();
    bp.buy_readdata();
    bp.buy_writedata();


    return 0;
}
