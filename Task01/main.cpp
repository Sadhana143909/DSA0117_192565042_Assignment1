#include <iostream> 
using namespace std;

class SmartCard
{
private:
int balance;
 
public:
void setBalance(int amount)
{
balance = amount;
}


void recharge(int amount)
{
balance = balance + amount;
}


void display()
{
cout << "Balance: Rs " << balance / 100 << endl;
}
};


int main()
{
SmartCard card;


card.setBalance(10000); card.display();

card.recharge(5000); card.display();

return 0;
}
