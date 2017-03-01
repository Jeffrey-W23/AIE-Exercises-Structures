// Question 1 //
//#include <iostream>
//using namespace std;
//
//// Player
//struct Player
//{
//	int health;
//	int height;
//};
//
//void main()
//{
//	// Create player
//	Player Bob;
//
//	//Print player health
//	cout << Bob.health;
//
//	system("pause");
//}
// Question 1 //

// Question 2 //
//#include <iostream>
//using namespace std;
//
//// Player
//struct Player
//{
//	char Name[45];
//	int Score;
//};
//
//void main()
//{
//	// Create player
//	Player Bob;
//
//	//Input the player name and score
//	cout << "Input name: ";
//	cin >> Bob.Name;
//
//	cout << "Input score: ";
//	cin >> Bob.Score;
//
//	// Print the player health and score
//	cout << Bob.Name;
//	cout << Bob.Score;
//
//	system("pause");
//}
// Question 2 //

// Question 3 //
//#include <iostream>
//using namespace std;
//
//// Player
//struct Player
//{
//	char Name[48];
//	int Score;
//};
//
//Player CreatePlayer()
//{
//	//Create Player
//	Player Bob;
//
//	//Input the player name and score
//	cout << "Input name: ";
//	cin >> Bob.Name;
//	cout << "Input score: ";
//	cin >> Bob.Score;
//
//	// Return Player
//	return Bob;
//}
//
//void main()
//{
//	// Create player and output result
//	Player Bob = CreatePlayer();
//
//	system("pause");
//}
// Question 3 //

// Question 4 //
//#include <iostream>
//using namespace std;
//
//// Player
//struct Player
//{
//	char Name[48];
//	int Score;
//};
//
//Player CreatePlayer()
//{
//	//Create Player
//	Player Bob;
//
//	//Input the player name and score
//	cout << "Input name: ";
//	cin >> Bob.Name;
//	cout << "Input score: ";
//	cin >> Bob.Score;
//
//	// Return Player
//	return Bob;
//}
//
//void main()
//{
//	// Create 5 players and output them
//	Player Bob[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		Bob[i] = CreatePlayer();
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << endl;
//		cout << "Name: ";
//		cout << Bob[i].Name << endl << endl;
//		cout << "Score: ";
//		cout << Bob[i].Score << endl;
//	}
//
//	system("pause");
//}
// Question 4 //

// Question 5 //
//#include <iostream>
//using namespace std;
//
//// Player
//struct Player
//{
//	char Name[48];
//	int Score;
//};
//
//Player CreatePlayer()
//{
//	//Create Player
//	Player Bob;
//
//	//Input the player name and score
//	cout << "Input name: ";
//	cin >> Bob.Name;
//	cout << "Input score: ";
//	cin >> Bob.Score;
//
//	// Return Player
//	return Bob;
//}
//
//void main()
//{
//	// Create 5 players and output them
//	Player Bob[5];
//
//	char SearchValue[48];
//
//	for (int i = 0; i < 5; i++)
//	{
//		Bob[i] = CreatePlayer();
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << endl;
//		cout << "Name: ";
//		cout << Bob[i].Name << endl << endl;
//		cout << "Score: ";
//		cout << Bob[i].Score << endl << endl;
//	}
//
//	cout << "Enter a Name to output the score: ";
//	cin >> SearchValue;
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (strcmp(SearchValue, Bob[i].Name) == 0)
//		{
//			cout << "Score: " << Bob[i].Score;
//		}
//	}
//
//	system("pause");
//}
// Question 5 //

// Question 6 //
//#include <iostream>
//using namespace std;
//
//struct ShopItem
//{
//	char Name[48];
//	int Cost;
//	int Quantity;
//};
//
//struct Shop
//{
//	int Gold;
//	ShopItem Item[2];
//};
//
//void main()
//{
//	// Shop
//	Shop shop;
//
//	//Menu
//	int MenuChoices;
//
//	// Items in shop
//	strcpy(shop.Item[0].Name, "Sword");
//	strcpy(shop.Item[1].Name, "Nintendo");
//	shop.Item[0].Cost = 10;
//	shop.Item[1].Cost = 10;
//	shop.Item[0].Quantity = 10;
//	shop.Item[1].Quantity = 10;
//	shop.Gold = 100;
//
//	//vars
//	int buySellAmount;
//
//	//Actions
//	cout << "What do you want to do?" << endl;
//	cout << "1. Change Prices" << endl;
//	cout << "2. Buy Stock" << endl;
//	cout << "3. Sell Stock" << endl;
//	cin >> MenuChoices;
//
//	//Option 1
//	if (MenuChoices == 1)
//	{
//		//Reuse MenuChoices
//		MenuChoices = 0;
//
//		// Next Actions
//		cout << "What would you like to change the price of?" << endl;
//
//		// Options
//		for (int i = 0; i < 2; i++)
//		{
//			cout << i+1 << "." << shop.Item[i].Name << endl;
//		}
//
//		cin >> MenuChoices;
//
//		// Choice 1
//		if (MenuChoices == 1)
//		{
//			cout << "The current price of " << shop.Item[0].Name << " is " << shop.Item[0].Cost << endl;
//			cout << "What price do you want to change it too: " << endl;
//			cin >> shop.Item[0].Cost;
//			cout << shop.Item[0].Name << shop.Item[0].Cost << endl;
//		}
//
//		// Choice 2
//		else if (MenuChoices == 2)
//		{
//			cout << "The current price of " << shop.Item[1].Name << " is " << shop.Item[1].Cost << endl;
//			cout << "What price do you want to change it too: " << endl;
//			cin >> shop.Item[1].Cost;
//			cout << shop.Item[1].Name << shop.Item[1].Cost << endl;
//		}
//	}
//
//	// Option 2
//	else if (MenuChoices == 2)
//	{
//		//Reuse MenuChoices
//		MenuChoices = 0;
//
//		// Next Actions
//		cout << "What stock would you like to buy?" << endl;
//
//		// Options
//		for (int i = 0; i < 2; i++)
//		{
//			cout << i + 1 << "." << shop.Item[i].Name << endl;
//		}
//
//		cin >> MenuChoices;
//
//		// Choice 1
//		if (MenuChoices == 1)
//		{
//			buySellAmount = 0;
//
//			cout << "You have: " << shop.Item[0].Quantity << " " << shop.Item[0].Name << "s" << endl;
//			cout << shop.Item[0].Name << "s" << " cost 10 each " << "How many do you want to buy?" << endl;
//			cin >> buySellAmount;
//			
//			shop.Item[0].Quantity = shop.Item[0].Quantity + buySellAmount;
//			shop.Gold = shop.Gold - (10 * buySellAmount);
//
//			cout << "You now have " << shop.Item[0].Quantity << " " << shop.Item[0].Name << "s" << endl;
//			cout << "You have " << shop.Gold << " Remaining in the shop" << endl;
//		}
//
//		// Choice 2
//		else if (MenuChoices == 2)
//		{
//			buySellAmount = 0;
//
//			cout << "You have: " << shop.Item[1].Quantity << " " << shop.Item[1].Name << "s" << endl;
//			cout << shop.Item[1].Name << "s" << " cost 10 each " << "How many do you want to buy?" << endl;
//			cin >> buySellAmount;
//
//			shop.Item[1].Quantity = shop.Item[1].Quantity + buySellAmount;
//			shop.Gold = shop.Gold - (10 * buySellAmount);
//
//			cout << "You now have " << shop.Item[1].Quantity << " " << shop.Item[1].Name << "s" << endl;
//			cout << "You have " << shop.Gold << " Remaining in the shop" << endl;
//		}
//	}
//
//	// Option 3
//	else if (MenuChoices == 3)
//	{
//		//Reuse MenuChoices
//		MenuChoices = 0;
//
//		// Next Actions
//		cout << "What stock would you like to sell?" << endl;
//
//		// Options
//		for (int i = 0; i < 2; i++)
//		{
//			cout << i + 1 << "." << shop.Item[i].Name << endl;
//		}
//
//		cin >> MenuChoices;
//
//		// Choice 1
//		if (MenuChoices == 1)
//		{
//			buySellAmount = 0;
//
//			cout << "You have: " << shop.Item[0].Quantity << " " << shop.Item[0].Name << "s" << endl;
//			cout << shop.Item[0].Name << "s" << " sell for " << shop.Item[0].Cost << " each " << "How many do you want to sell?" << endl;
//			cin >> buySellAmount;
//
//			shop.Item[0].Quantity = shop.Item[0].Quantity - buySellAmount;
//			shop.Gold = shop.Gold + (shop.Item[0].Cost * buySellAmount);
//
//			cout << "You now have " << shop.Item[0].Quantity << " " << shop.Item[0].Name << "s" << endl;
//			cout << "You have " << shop.Gold << " Remaining in the shop" << endl;
//		}
//
//		// Choice 2
//		else if (MenuChoices == 2)
//		{
//			buySellAmount = 0;
//
//			cout << "You have: " << shop.Item[1].Quantity << " " << shop.Item[1].Name << "s" << endl;
//			cout << shop.Item[1].Name << "s" << " sell for " << shop.Item[1].Cost << " each " << "How many do you want to sell?" << endl;
//			cin >> buySellAmount;
//
//			shop.Item[1].Quantity = shop.Item[1].Quantity - buySellAmount;
//			shop.Gold = shop.Gold + (shop.Item[1].Cost * buySellAmount);
//
//			cout << "You now have " << shop.Item[1].Quantity << " " << shop.Item[1].Name << "s" << endl;
//			cout << "You have " << shop.Gold << " Remaining in the shop" << endl;
//		}
//	}
//
//	system("pause");
//}
// Question 6 //