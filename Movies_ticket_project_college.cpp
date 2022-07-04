// Project:- 
// Cinema Movie Ticket system. 
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    int n;
    string movie;
    string index;
    string pay;
    cout<<"\t\tWelcome To ICT Movies\n";
    m:
    cout<<"\t\tEnter 1 -> To Check For Available Movies\n";
    cout<<"\t\tEnter 2 -> To Check for Available seats AND Seat Price\n";
    cout<<"\t\tEnter 3 -> To Book Movie Ticket AND Show Detail on terminal as well as in file\n";
    cout<<"\t\tEnter 4 -> To Get Safe Exit"<<endl;

    cout<<"Enter Your Choice: ";
    cin>>n;

    switch(n)
    {
        case 1:
        {
            // number of movies.
            cout<<"\tTopGun Mavrick"<<endl;
            cout<<"\tCaptain America"<<endl;
            cout<<"\tIron Man"<<endl;
            cout<<"\tHulk"<<endl;
            cout<<"\tThor"<<endl;
            goto m;
        }

        case 2:
        {
            cout<<"\nEnter Movie name: ";
            cin>>movie;
            cout<<"\n\nEnter To Watch Movie in 3D OR Normal: ";
            cin>>index; // example 3d.
            if(movie == "captain america")
            {
                cout<<"Available Seats are: 86 OUT of 120"<<endl;
                if(index == "3d")
                {
                    cout<<"\nPrice For 3D "<<movie<<" is: 799 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>pay;
                    if(pay == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<movie<<endl;
                    }
                    else if(pay == "no")
                    {
                        goto m;
                    }
                }
                else
                {
                    cout<<"\nPrice for Normal "<<movie<<" is: 499 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>pay;
                    if(pay == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<movie<<endl;
                    }
                    else if(pay == "no")
                    {
                        goto m;
                    }
                }
            }
            else if(movie == "iron man")
            {
                cout<<"Avaiable Seats are: 90 OUT of 120"<<endl;
                if(index == "3d")
                {
                    cout<<"\nPrice For 3D "<<movie<<" is: 799 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>pay;
                    if(pay == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<movie<<endl;
                    }
                    else if(pay == "no")
                    {
                        goto m;
                    }
                }
                else
                {
                    cout<<"\nPrice for Normal "<<movie<<" is: 499 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>pay;
                    if(pay == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<movie<<endl;
                    }
                    else if(pay == "no")
                    {
                        goto m;
                    }
                }
            }
            else if(movie == "thor")
            {
                cout<<"Available Seats are: 45 OUT of 120"<<endl;
                if(index == "3d")
                {
                    cout<<"\nPrice For 3D"<<movie<<" is: 799 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>pay;
                    if(pay == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<movie<<endl;

                    }
                    else if(pay == "no")
                    {
                        goto m;
                    }
                }
                else
                {
                    cout<<"\nPrice for Normal "<<movie<<" is: 499 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>pay;
                    if(pay == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<movie<<endl;
                    }
                    else if(pay == "no")
                    {
                        goto m;
                    }
                }
            }
            else if(movie == "hulk")
            {
                cout<<"Available Seats are: 67 OUT of 120"<<endl;
                if(index == "3d")
                {
                    cout<<"\nPrice For 3D "<<movie<<" is: 799 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>pay;
                    if(pay == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<movie<<endl;
                    }
                    else if(pay == "no")
                    {
                        goto m;
                    }
                }
                else
                {
                    cout<<"\nPrice for Normal "<<movie<<" is: 499 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>pay;
                    if(pay == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<movie<<endl;
                    }
                    else if(pay == "no")
                    {
                        goto m;
                    }
                }
            }else if(movie == "topgun mavrick")
            {
                cout<<"Available Seats are: 100 OUT of 120"<<endl;
                if(index == "3d")
                {
                    cout<<"\nPrice For 3D "<<movie<<" is: 799 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>pay;
                    if(pay == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<movie<<endl;
                    }
                    else if(pay == "no")
                    {
                        goto m;
                    }
                }
                else
                {
                    cout<<"\nPrice for Normal "<<movie<<" is: 499 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>pay;
                    if(pay == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<movie<<endl;
                    }
                    else if(pay == "no")
                    {
                        goto m;
                    }
                }
            }
            else
                {
                    cout<<"Thus!! No Movie available"<<endl;
                }
                goto m;
        }

        case 3:
        {
            cout<<"\n\t\t_____YOUR DETAIL_____"<<endl;
            cout<<"\tSelected Movie is: "<<movie<<endl;
            cout<<"\tMovie Available in: "<<index<<endl;
            cout<<"\tPaid Successfully: "<<pay<<endl;
            // store ticket detail in file.
            ofstream obj;

            obj.open("first.txt", ios::out); // creating file for inserting details about ticket.
            obj<<"Your Selected Movie Name is: "<<movie<<endl;
            obj<<"Movie Available in: "<<index<<endl;
            obj<<"You Have PAID "<<pay<<endl;
            obj.close();

            goto m; // returning back.
        }


        case 4:
        {
            cout<<"\nThank You For Visiting ICT Cinema"<<endl;
            break;
        }
    }
}