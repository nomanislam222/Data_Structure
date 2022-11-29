#include <iostream>
using namespace std;

class Toll{
public:
  string car_no;
  string ticket_no;
  void car();
  void display();
};


void Toll::car()
{
  cout<<"Car Number:";
  cin>>car_no;
  cout<<"Ticket Number";
  cin>>ticket_no;

}


void Toll::display()
{
  cout<<"Date";
  cout<<"Car Number:"<<car_no;
  cout<<"Ticket Number"<<ticket_no;
}

void Toll::searching(string car_no)
for(int i = 0, i < entry[car_count], i++){
if(Toll.car_no == carNumber){
cout<<"Date: "<<tollEntry.date<<" Ticket Number: "<<tollEntry.ticketNumber<<endl;
}
}
cout<<"Vehicle Number Not Found"<<endl;
}


int main()
{
  Toll entry[100];
  int car_count =0,high_tax = 0, medium_tax =0, low_tax = 0;
  int choice;
while(1)
{
  cout<<endl<<"1. Heavy \n2. Medium\n3. Light";
  cin>>choice;
  switch(choice){
  case 1:
  entry[car_count].car();
  high_tax += 700;
  car_count++;
  break;

  case 2:
  entry[car_count].car();
  medium_tax += 400;
  car_count++;
  break;

  case 3:
  entry[car_count].car();
  low_tax += 200;
  car_count++;
  break;
  }
}
return 0;
}
