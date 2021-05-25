//Resturant order project

#include<iostream>
using namespace std;


void detailPanel(string s, int purchased, int sold, int total, int amount)
{
	cout<<"\n\n\t\t\tDetails Panel";
	cout<<"\n Purchased "<< s <<" : "<<purchased;
	cout<<"\n Per " << s << " price: " << amount;
	cout<<"\n Sold "<< s <<" : "<<sold;
	cout<<"\n Remaining "<< s <<" : "<<purchased-sold;
	cout<<"\n Total price of "<< s <<" sold in a day: "<<total;
	cout<<"\n\n";
}

int main(){
	
	 int pur_pizza=0, pur_burger=0, pur_sandwich=0, pur_ice=0, pur_ramen=0;
	 int sell_pizza=0, sell_burger=0, sell_sandwich=0, sell_ice=0, sell_ramen=0;
	 int price_pizza=0, price_burger=0, price_sandwich=0, price_ice=0, price_ramen=0;
	
	int choice, quantity, detail_choice;
	
	cout<<"\n\n\t\t\tPurchased Items";
	cout<<"\n\n Number of Pizza: ";
	cin>> pur_pizza;
	cout<<"\n\n Number of Burger: ";
	cin>> pur_burger;
	cout<<"\n\n Number of Sandwich: ";
	cin>> pur_sandwich;
	cout<<"\n\n Number of Ice-Cream: ";
	cin>> pur_ice;
	cout<<"\n\n Number of Ramen: ";
	cin>> pur_ramen;
	
	p:
	system("clear");
	
	cout<<"\n\n\t\t\t Sell Operations";
	cout<<"\n\n 1. Pizza";
	cout<<"\n\n 2. Burger";
	cout<<"\n\n 3. Sandwich";
	cout<<"\n\n 4. Ice-Cream";
	cout<<"\n\n 5. Ramen";
	cout<<"\n\n 6. Product Details";
	cout<<"\n\n 7. Total Transaction";
	cout<<"\n\n 8. Exit";
	cout<<"\n\n Enter Your Choice: ";
	
	cin>>choice;
	switch(choice)
	{
		case 1: 
			cout<<"\n\n Enter Pizza Quantity: ";
			cin>>quantity;
			if(pur_pizza-sell_pizza>=quantity)
			{
				sell_pizza +=quantity;
				price_pizza += quantity*700;

			cout<<"\n\t\t Sold "<<quantity <<" Pizza. Thanks for your purchase.";
			}
			else
			{
				cout<<"\n\n\t\t Unfortunately only "<<pur_pizza-sell_pizza<<" Pizza remaining in the coutner. So, we cannot process your request now.";
			}
	
			break;
		case 2:
			cout<<"\n\n Enter Burger Quantity: ";
			cin>>quantity;
			if(pur_burger-sell_burger>=quantity)
			{
				sell_burger +=quantity;
				price_burger += quantity*200;
				cout<<"\n\t\t Sold "<<quantity <<" Burger. Thanks for your purchase.";
			}
			else
			{
				cout<<"\n\n\t\t Unfortunately only "<<pur_burger-sell_burger<<" Burger remaining in the coutner. So, we cannot process your request now.";
			}
	
			break;
		case 3: 
			cout<<"\n\n Enter Sandwich Quantity: ";
			cin>>quantity;
			if(pur_sandwich-sell_sandwich>=quantity)
			{
				sell_sandwich +=quantity;
				price_sandwich += quantity*100;
			
			cout<<"\n\t\t Sold "<<quantity <<" Sandwich. Thanks for your purchase.";
			}
			else
			{
				cout<<"\n\n\t\t Unfortunately only "<<pur_sandwich-sell_sandwich<<" Sandwich remaining in the coutner. So, we cannot process your request now.";
			}
			break;
		case 4: 
			cout<<"\n\n Enter Ice-cream Quantity: ";
			cin>>quantity;
			if(pur_ice-sell_ice>=quantity)
			{
				sell_ice +=quantity;
				price_ice += quantity*150;
			
			cout<<"\n\t\t Sold "<<quantity <<" Ice-cream. Thanks for your purchase.";
			}
			else
			{
				cout<<"\n\n\t\t Unfortunately only "<<pur_ice-sell_ice<<" Ice-cream remaining in the coutner. So, we cannot process your request now.";
			}
			break;
		case 5: 
			cout<<"\n\n Enter Ramen Quantity: ";
			cin>>quantity;
			if(pur_ramen-sell_ramen>=quantity)
			{
				sell_ramen +=quantity;
				price_ramen += quantity*900;
			
			cout<<"\n\t\t Sold "<<quantity <<" Ramen. Thanks for your purchase.";
			}
			else
			{
				cout<<"\n\n\t\t Unfortunately only "<<pur_ramen-sell_ramen<<" Ramen remaining in the coutner. So, we cannot process your request now.";
			}
			break;
		case 6:
			c:
			system("clear");
			cout<<"\n\t\t Transaction Operations";
			cout<<"\n\n 1. Pizza";
			cout<<"\n\n 2. Burger";
			cout<<"\n\n 3. Sandwich";
			cout<<"\n\n 4. Ice-Cream";
			cout<<"\n\n 5. Ramen";
			cout<<"\n\n Enter Your Choice: ";
			cin>>detail_choice;
			switch(detail_choice)
			{
				case 1:
					detailPanel("Pizza", pur_pizza, sell_pizza, price_pizza, 700);
					break;
				case 2:
					detailPanel("Burger", pur_burger, sell_burger, price_burger, 200);
					break;
				case 3:
					detailPanel("Sandwich", pur_sandwich, sell_sandwich, price_sandwich, 100);
					break;
				case 4:
					detailPanel("Ice-Cream", pur_ice, sell_ice, price_ice, 150);
					break;
					
				case 5:
					detailPanel("Ramen", pur_ramen, sell_ramen, price_ramen, 900);
					break;
					
				default: 
					cout<<"\n\n Invalid Operations. Benevolently try again!!!";
			}
			
			int flag;
			cout<<"\n\n Enter 1 to check details operations again.";
			cout<<"\n\n Enter any key to go back to the sell operations again.";
			cout<<"\n";
			cin>>flag;
			
			if(flag==1)
			{
				goto c;
			}
			else
			{
				break;
			}
			
		case 7: 
			cout<<"\n\n\n\t\t Total monetary transaction of the day: "<< price_pizza + price_burger + price_sandwich + price_ice + price_ramen;
			break;
		case 8: 
			system("clear");
			cout<<"\n\n\t\t\tThank you for using our system!\n\n";
			exit(0);
		
		default: 
			cout<<"\n\n Invalid Operations. Benevolently try again!!!";

	}
	
	goto p;
	return 0;
}
