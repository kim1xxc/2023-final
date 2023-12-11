#include <iostream>
#include <windows.h>
using namespace std;

string inventory[10];
int coins = 100;

//declaration

void AnimalGen();
void Shop();
string YourName; //set up variable to hold name
int PlayerHealth = 100; //global variable


int main() { //starting point

	for (int i = 0; i < 10; i++)
		inventory[i] = " ";

	cout << "What is your name?" << endl; //ask the user for their name
	//store that name in a variable
	
	cin >> YourName;
	
	cout << "hello, " << YourName << endl;

	cout << "You are a capybara, you woke up in a tropical forest you need to find your family" << endl;

	cout << "How did I get here? You think to yourself" << endl;

	Beep(523, 300);


	srand(time(NULL));
	// game variables

	int room = 1;
	string input = "a";



	cout << "." << endl;

	for (int i = 0; i < 10; i++)
		cout << inventory[i] << " ";
	cout << endl;


	//game loop
	while (input != "q" && PlayerHealth >= 0) {
		switch (room) {
			
		case 1:
			system("color 2F");
			cout << "You woke up , you can go (s)outh" << endl;
			cin >> input;
			if (input == "s")
				room = 2;
			break;
		case 2:
			//BattleSystem(); //function call
			system("color 9F");
			cout << "You've stumbled upon a waterfall and you're very thirsty,  a magical red (b)ucket appears. You can go (n)orth or (e)ast." << endl;
			AnimalGen();
			if (inventory[0] != "key")
				cout << "you see a red bucket." << endl;
			cin >> input;
			if (input == "n")
				room = 1;
			if (input == "e")
				room = 3;
			if (input == "b")
				cout << "You got water!+energy" << endl;
			break;
		case 3:
			system("color 79");
			cout << "It seems like the trees are endless, a butterfly lands on your nose it will stay with you on your journey. You are starting to get hungry press (b)ite to eat the grass . You can go (w)est and (e)ast" << endl;
			cout << "//  \\     /  \\\\" << endl;
			cout << "|| * \\. ./ * ||" << endl;
			cout << "\\\\____\\X/____//" << endl;
			cout << " / *  /O\\  *  \\" << endl;
		    cout << "  \\__/   \\__ / " << endl;
			Shop();
			

			cin >> input;
			if (input == "e")
				room = 4;
			if (input == "w")
				room = 2;
			if (input == "b")
				cout << "Your hunger is cured!, you can hear growls..." << endl;

			break;

		case 4:
			system("color 0C");
			cout << "Oh no! A jaguar is chasing you..  You can go in the (l)ake or (r)un into the trees" << endl;

			cin >> input;
			if (input == "l") {
				cout << "You got to swim with the aquatic animals and had a good time! You bumped into your capy friend gort, maybe you can get answers." << endl;
				room = 3;
			}
			if (input == "r") {
				cout << "Thankfully you ate food and drank water you barely survived.. Your butterfly friend distracted the vicious jaguar" << endl;
			
			}room = 5;

			break; 

		case 5:
			system("color 79");
			cout << "Gort what happened?" << endl;
		
			cout << "Gort looked at you and was surprised. You dont know"    << YourName << endl;


			cout << "No I don't know.." << endl;

			cout << "I'll give you time to remember I have to go buddy. Gort says. You are left with more questions, what is your mind blocking out? You can go(n)orth and (e)ast" << endl;

			cin >> input;
			if (input == "n")
				room = 4;
			if (input == "e")
				room = 6;

			break;

		case 6:

			cout << "you found a (b)ook unfortunately you can't read although it's very familar maybe you are close? You can go (w)est and (e)ast" << endl;
			system("color 7D");
			cin >> input;
			if (input == "w")
				room = 5;
			if (input == "e")
				room = 7;

			break;

		case 7:

			cout << "You have found your favorite fruit watermelon. You can go (w)est and (s)outh" << endl;
			system("color 7D");
			cin >> input;
			if (input == "w")
				room = 6;
			if (input == "s")
				room = 8;

			break;

		case 8:
			system("color 7C");
			cout << "You remebered that Gort can read, you found him again and asked him to read it for you. " << endl;
			cout << "Gort can you read this for me?" << endl;
			cout << "Gort read the book, he said that the book is about a waterfall with a hidden entrence and the last page had a map. You can go (n)orth and (s)outh" << endl;

			cin >> input;
			if (input == "n")
				room = 7;
			if (input == "s")
				room = 9;

			break;

		case 9:
			system("color 7B");
			cout << "You went on your journey to find this waterfall, you need answers. You can go (n)orth and (s)outh" << endl;

			cin >> input;
			if (input == "n")
				room = 8;
			if (input == "s")
				room = 10;

			break;

		case 10:
			system("color 7B");
			cout << "You finally have found the mysterious waterfall, you found the secret entrence. You can go (n)orth or (e)ast" << endl;

			cin >> input;
			if (input == "n")
				room = 9;
			if (input == "e")
				room = 11;


			break;

		case 11:
			system("color 09");
			cout << "You have entered the cave, there are crystals everywhere, You can go (w)est or (e)ast" << endl;

			cin >> input;
			if (input == "w")
				room = 10;
			if (input == "e")
				room = 12;

			break;

		case 12:
			system("color 09");
			cout << "You see a crumbled note on the ground, It's from Gort. He knows you can't read so he made a drawing. You can go (n)orth or (e)ast" << endl;

			cin >> input;
			if (input == "n")
				room = 11;
			if (input == "e")
				room = 13;

			break;

		case 13:
			system("color 09");
			cout << "The drawing looks like your friend Caplin Rous what could this mean? Your butterfly friend seems to be leading you through the cave. You can go (w)est or (e)ast" << endl;

			cin >> input;
			if (input == "w")
				room = 12;
			if (input == "e")
				room = 14;

			break;

		case 14:
			system("color 09");
			cout << "The butterfly went on the drawing of Caplin Rous, your memories came back. The floors began to glow showing you to go to the right path. You can go (w)est or (e)ast" << endl;

			cin >> input;
			if (input == "w")
				room = 13;
			if (input == "e")
				room = 15;

			break;

		case 15:
			system("color 09");
			cout << "Gort gave you the drawing of Caplin because he knew your memories would come back ." << endl;
			cout << "Last night, during the rare celestial event, a portal to the magical realm briefly opened. Your family entered, you didn't go in because you were afraid. It was too late because the portal closed." << endl;
			cout << "You can go (w)est or (e)ast" << endl;
			cin >> input;
			if (input == "w")
				room = 14;
			if (input == "e")
				room = 16;

			break;

		case 16:
			system("color 09");
			cout << "You walked missing your family more, a giant crystal appears. You can go (w)est or (e)ast" << endl;

			cin >> input;
			if (input == "w")
				room = 15;
			if (input == "e")
				room = 17;

			break;

		case 17:
			system("color 09");
		 cout << "you're here ," << YourName << endl;
		 cout << "Caplin..? Where is my family" << endl;
		 cout << "Follow me" << endl;
		 cout << "You can go(w)est or (n)orth" << endl;

			cin >> input;
			if (input == "w")
				room = 16;
			if (input == "n")
				room = 18;

			break;
			
		case 18:
			system("color 7D");
			cout << "You finally found your family, they all looked at you with smiles. They did have strange crystals with them" << endl;
			cout << "We missed you " << YourName << endl;
			cout << "What happened guys? You said" << endl;
			cout << "Caplin entered the dimension to save us, we were in another world filled with crystals and strange creatures we have never seen." << endl;
			cout << "This (c)rystal is for you " << YourName << endl;
			cout << "You can go (s)outh or (e)ast" << endl;

			cin >> input;
			if (input == "s")
				room = 17;
			if (input == "e")
				room = 19;

			break;

		case 19:
			system("color 7D");
			cout << "Gort ! You say happily. You can go (s)outh or (n)orth" << endl;
			cout << "I knew you could do it bud, go to the big crystal and put yours inside, Gort says" << endl;
			cout << "You can go (w)est or (n)orth" << endl; 

			cin >> input;
			if (input == "w")
				room = 18;
			if (input == "n")
				room = 20;

			break;

		case 20:
			system("color 7D");
			cout << "You put your crystal inside, your butterfly buddy glowed. The butterfly was able to grant any of your desired wishes. You can go (s)outh" << endl;
			cout << "What is your wish?" << endl;
			cout << "Your wish has been granted :)" << endl;
			cout << "Your whole family eats a giant watermelon and swim." << endl;
			cin >> input;
			if (input == "s")
				room = 19;
		
			break;

		}//end switch
	}//end game loop

} //end main




void AnimalGen() {
	int num = rand() % 100; //range of 0-99
	if (num < 25) {
		cout << "A slowwwww slothhhh appears" << endl;

	}
	//add more else if statemens here
	else if (num < 50) {
		cout << "Oh no.. a poisionous dart frog appears" << endl;

	}
	else if (num < 60) {
		cout << "A lovely humming bird sang" << endl;

	}
	else if (num < 80) {
		cout << "An orangutan swang by" << endl;

	}
	cout << "A spectaled owl flew by! " << endl;


}

void Shop() {
	int input = -1;
	while (input != 0) {
		cout << "welcome to the shop!" << endl;
		cout << "You have " << coins << " coins." << endl;
		cout << "1) items for sale:" << endl;
		cout << "2) peanut butter: 20" << endl;
		cout << "3) butterfly food: 10" << endl;
		cout << "4) Map: 50" << endl;
		cin >> input;
		if (input == 1) {
			if (coins >= 20) {
				cout << "you bought peanut butter yum!" << endl;
				inventory[1] = "peanut butter";
			}		coins -= 20;

			if (coins <= 20) {
				cout << "sorry you don't have enough coins :(" << endl;
			}
		}
		if (input == 2) {
			if (coins >= 10) {
				cout << "you bought butterfly food!" << endl;
				inventory[2] = "butterfly food";
				coins -= 10;
			}
			else
				cout << "sorry you don't have enough coins" << endl;

		}
		if (input == 3) {
			if (coins >= 50) {
				cout << "you bought a map!" << endl;
				inventory[3] = "map";
				coins -= 50;
			}
			else
				cout << "You don't have enough coins :(" << endl;
		}
	}//end of shop loop
}
