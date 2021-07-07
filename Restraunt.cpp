#include<iostream>
#include<conio.h>
using namespace std;

main()
{
//pizza ice-cream,burger.total sales today.
    int pp=0,pb=0,ps=0,pi=0,pc=0;//pizza
    int sp=0,sb=0,ss=0,si=0,sc=0;
    int p=0,b=0,s=0,i=0,c=0,choice,q;

    cout<<"\n\t\t Purchase Items";
    cout<<"\n\n Number of Pizza :";
    cin>>pp;
    cout<<"\n\n Number of Burger :";
    cin>>pb;
    cout<<"\n\n Number of Sandwich :";
    cin>>ps;
    cout<<"\n\n Number of Ice-cream :";
    cin>>pi;
    cout<<"\n\n Number of Cake :";
    cin>>pc;
    p:
    system("cls");
    cout<<"\n\t\t Control Panel";
    cout<<"\n\n 1. Pizza ";
    cout<<"\n\n 2. Burger ";
    cout<<"\n\n 3. Sandwich ";
    cout<<"\n\n 4. Ice-cream ";
    cout<<"\n\n 5. Cake ";
    cout<<"\n\n 6. Details ";
    cout<<"\n\n 7. Exit ";
    cout<<"\n\n Enter Your Choice :  ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"\n\n Enter Pizza Quantity :";
        cin>>q;
        if(pp-sp>=q){
            sp+=q;
            p+=q*700;//pizza saling * unit prices
            cout<<"\n\n\n\t\t\t"<<q<<" Pizza Sales Thank you so much";
        }
        else{
            cout<<"\n\n\n\t\t\t SORRY"<<pp-sp<<"Pizza Remaining Resturent ...";
        }
        break;
    case 2:
        cout<<"\n\n Enter Burger Quantity :";
        cin>>q;
        if(pb-sb>=q){
            sb+=q;
            p+=q*100;//pizza saling * unit prices
            cout<<"\n\n\n\t\t\t"<<q<<"Burger Sales Thank you so much";
        }
        else{
            cout<<"\n\n\n\t\t\t SORRY"<<pb-sb<<"Burger Remaining Resturent ...";
        }
        break;
    case 3:
        cout<<"\n\n Sandwich Enter  Quantity :";
        cin>>q;
        if(ps-ss>=q){
            ss+=q;
            s+=q*120;//pizza saling * unit prices
            cout<<"\n\n\n\t\t\t"<<q<<"Sandwich sales Thank you so much";
        }
        else{
            cout<<"\n\n\n\t\t\t SORRY"<<ps-ss<<"Sandwich Remaining Resturent ...";
        }
        break;
    case 4:
        cout<<"\n\n Enter Ice-cream Quantity :";
        cin>>q;
        if(pi-si>=q){
            si+=q;
            i+=q*50;//pizza saling * unit prices
            cout<<"\n\n\n\t\t\t"<<q<<"Ice-cream sales Thank you so much";
        }
        else{
            cout<<"\n\n\n\t\t\t SORRY"<<pi-si<<"Ice-cream Remaining Resturent ...";
        }
        break;
    case 5:
        cout<<"\n\n Enter Cake Quantity :";
        cin>>q;
        if(pc-sc>=q){
            sc+=q;
            c+=q*150;//pizza saling * unit prices
            cout<<"\n\n\n\t\t\t"<<q<<"Cake sales Thank you so much";
        }
        else{
            cout<<"\n\n\n\t\t\t SORRY"<<pc-sc<<"Cake Remaining Resturent ...";
        }
        break;
    case 6:
        system("cls");
        //Pizza
        cout<<"\n\t\t details Panel";
        cout<<"\n\n Purchase Pizza Quantity :"<<pp;
        cout<<"\n\n sales Pizza Quantity :"<<sp;
        cout<<"\n\n Remaining Pizza Quantity :"<<pp-sp;
        cout<<"\n\n Total Pizza Price in a day  :"<<p;
       //Burfer
        cout<<"\n\t\t details Panel";
        cout<<"\n\n Purchase Burger Quantity :"<<pb;
        cout<<"\n\n sales Burger Quantity :"<<sb;
        cout<<"\n\n Remaining Burger Quantity :"<<pb-sb;
        cout<<"\n\n Total Burger Price in a day  :"<<b;
        //sandwich
         cout<<"\n\t\t details Panel";
        cout<<"\n\n Purchase Sandwich Quantity :"<<ps;
        cout<<"\n\n sales Sandwich Quantity :"<<ss;
        cout<<"\n\n Remaining Sandwich Quantity :"<<ps-ss;
        cout<<"\n\n Total Sandwich Price in a day  :"<<s;
        //Ice-cream
        cout<<"\n\t\t details Panel";
        cout<<"\n\n Purchase Ice-cream Quantity :"<<pi;
        cout<<"\n\n sales Ice-cream Quantity :"<<si;
        cout<<"\n\n Remaining Ice-cream Quantity :"<<pi-si;
        cout<<"\n\n Total Ice-cream Price in a day  :"<<i;
        //Cake
        cout<<"\n\t\t details Panel";
        cout<<"\n\n Purchase Cake Quantity :"<<pc;
        cout<<"\n\n sales Cake Quantity :"<<sc;
        cout<<"\n\n Remaining Cake Quantity :"<<pc-sc;
        cout<<"\n\n Total Cake Price in a day  :"<<c;
        cout<<"\n\n Total day Price : "<<p+b+s+i+c;
        break;
    case 7:
        exit(0);//s/w close
        break;
    default:
        cout<<"Invalid Order To Place Please Try again....!!!";
    }
    getch();
    goto p;
}

