#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;

    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    //food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    //Total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\nRooms available :";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of burger :";
    cin>>Qburger;
    cout<<"\n Quantity of noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake :";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll :";
    cin>>Qchicken;


m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"n\n1) Rooms";
    cout<<"\n2) Paasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"\n\n Enter the number of rooms you want: ";

        cin>>quant;
        if(Qrooms-Srooms >=quant)
        {
             Srooms=Srooms+quant; 
             Total_rooms=Total_rooms+quant*1200;
             cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you!";
        }
        else{
            cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
            break;
        }
           case 2:
        cout<<"\n\n Enter Pasta Quantity ";

        cin>>quant;
        if(Qpasta-Spasta >=quant)
        {
             Spasta =Spasta+quant; 
             Total_pasta=Total_pasta+quant*250;
             cout<<"\n\n\t\t"<<quant<<"pasta is order!";
        }
        else{
            cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel";
            break;
        }
        case 3:
        cout<<"\n\n Enter Burger Quantity ";

        cin>>quant;
        if(Qburger-Sburger >=quant)
        {
             Sburger =Sburger+quant; 
             Total_burger=Total_burger+quant*200;
             cout<<"\n\n\t\t"<<quant<<"burger is order!";
        }
        else{
            cout<<"\n\tOnly"<<Qburger-Sburger<<"Burger remaining in hotel";
            break;
        }
        case 4:
        cout<<"\n\n Enter Noodles Quantity ";

        cin>>quant;
        if(Qnoodles-Snoodles >=quant)
        {
             Snoodles =Snoodles+quant; 
             Total_noodles=Total_noodles+quant*140;
             cout<<"\n\n\t\t"<<quant<<"noodles is order!";
        }
        else{
            cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"Noodles remaining in hotel";
            break;
        }
        case 5:
        cout<<"\n\n Enter Shakes Quantity ";

        cin>>quant;
        if(Qshake-Sshake >=quant)
        {
             Sshake =Sshake+quant; 
             Total_shake=Total_shake+quant*120;
             cout<<"\n\n\t\t"<<quant<<"shake is order!";
        }
        else{
            cout<<"\n\tOnly"<<Qshake-Sshake<<"Shake remaining in hotel";
            break;
        }
        case 6:
        cout<<"\n\n Enter Chicken Quantity ";

        cin>>quant;
        if(Qchicken-Schicken >=quant)
        {
             Schicken =Schicken+quant; 
             Total_chicken=Total_chicken+quant*150;
             cout<<"\n\n\t\t"<<quant<<"chicken-roll is order!";
        }
        else{
            cout<<"\n\tOnly"<<Qchicken-Schicken<<"Chicken-roll remaining in hotel";
            break;
        }
        case 7:
        cout<<"\n\t\tDetails of sales and collections ";
        cout<<"\n\n Number of rooms we had: "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day: "<<Total_rooms;

        cout<<"\n\t\tDetails of sales and collections ";
        cout<<"\n\n Number of Pastas we had: "<<Qpasta;
        cout<<"\n\n Number of Pastas we gave for rent "<<Spasta;
        cout<<"\n\n Remaining Pastas : "<<Qpasta-Spasta;
        cout<<"\n\n Total Pastas collection for the day: "<<Total_pasta;

        cout<<"\n\t\tDetails of sales and collections ";
        cout<<"\n\n Number of Burgers we had: "<<Qburger;
        cout<<"\n\n Number of Burgers we gave for rent: "<<Sburger;
        cout<<"\n\n Remaining Burgers : "<<Qburger-Sburger;
        cout<<"\n\n Total Burgers collection for the day: "<<Total_burger;

        cout<<"\n\t\tDetails of sales and collections ";
        cout<<"\n\n Number of Noodles we had: "<<Qnoodles;
        cout<<"\n\n Number of Noodles we gave for rent: "<<Snoodles;
        cout<<"\n\n Remaining noodles : "<<Qrooms-Srooms;
        cout<<"\n\n Total noodles collection for the day: "<<Total_noodles;

        cout<<"\n\t\tDetails of sales and collections ";
        cout<<"\n\n Number of Shakes we had: "<<Qshake;
        cout<<"\n\n Number of Shakes we gave for rent: "<<Sshake;
        cout<<"\n\n Remaining shakes : "<<Qshake-Sshake;
        cout<<"\n\n Total shakes collection for the day: "<<Total_shake;

        cout<<"\n\t\tDetails of sales and collections ";
        cout<<"\n\n Number of Chicken-roll we had: "<<Qchicken;
        cout<<"\n\n Number of Chicken-roll we gave for rent: "<<Schicken;
        cout<<"\n\n Remaining chicken-roll : "<<Qchicken-Schicken;
        cout<<"\n\n Total Chicken-roll collection for the day: "<<Total_chicken;

        cout<<"\n\n Total Collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
        break;
        case 8:
        exit(0);

        default:
        cout<<"\n Please select the numbers mentioned above!";
    }
    goto m;
}
