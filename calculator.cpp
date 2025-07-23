#include <iostream>
using namespace std;

int main()
{
    int choice,num1,num2;
do
{
    cout<<"simple calculator \n";
    cout<<"1. addition \n";
    cout<<"2. multiplication \n ";
    cout<<"3. subtraction \n";
    cout<<"4. divide \n";
    cout<<"5. exite \n";
    cout<<"enter your choice \n";
if (choice != 0);
{
    cout<<"enter two number \n";
    cin>>num1>>num2;

}

switch (choice)
{
    case 1:
        cout<<"result"<<num1 + num2<<endl;
        break;
    case 2:
        cout<<"result"<<num1 * num2<<endl;
        break;
    case 3:
        cout<<"result"<<num1 - num2<<endl;
        break;
case 4: 
    if (num2 != 0)
    {   
        cout<<"result"<<num1 / num2<<endl;
    }
    else 
    {
        cout<<"error: cannot  divide by zero. \n";
    }
    break;

    default:
        cout<<"invalid choice. \n";
        cout<<"please try again";
  }

} while(choice != 0);

    return 0;
}
