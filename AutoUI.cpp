#include "AutoUI.h"
#include <iostream>
using namespace std;

void AutoUI::show_car(Auto a) {
	cout << "ID: " << a.getId() << ", brand: " << a.getMarke() << ", model: " << a.getModell() << endl;
}

void AutoUI::AutoMenu() {
	int opt, id;
	string marke, modell;
	Auto a1 = Auto(1, "Mazda", "Mazda3");
	Auto a2 = Auto(2, "Porsche", "Taycan");
	Auto a3 = Auto(3, "Renault", "Megane");
	Auto a4 = Auto(4, "Lexus", "LS");
	Auto a5 = Auto(5, "Toyota", "Camry");
	controller.saveAuto(a1);
	controller.saveAuto(a2);
	controller.saveAuto(a3);
	controller.saveAuto(a4);
	controller.saveAuto(a5);

	cout << "Welcome to the Auto App! You can..." << endl;

	while (true) {
		cout << endl << "1. Find a car by its ID" << endl << \
			"2. See the entire list of cars" << endl << \
			"3. Save a car in the list" << endl << \
			"4. Delete a car from the list by its ID" << endl << \
			"5. Update the brand or the model of a car" << endl << \
			"6. Exit" << endl;

		cout << endl << "Your choice: ";
		cin >> opt;

		if (opt == 1) {
			cout << endl << "Find car" << endl;
			cout << "ID: ";
			cin >> id;
			Auto a = controller.findAutoById(id);
			if (a.getId() == NULL) {
				cout << endl << "Sorry, it seems like the car you were searching for is not in the list yet :(" << \
					endl << "Hint: If you want, you can add it to the list by choosing the third option!" << endl;
			}
			else {
				show_car(a);
			}
		}

		else if (opt == 2) {
			cout << endl << "List of cars" << endl;
			vector<Auto> show = controller.findAll();
			if (show.size() == 0) {
				cout << "Oops...the list is empty" << endl;
			}
			else {
				for (int i = 0; i < show.size(); i++) {
					show_car(show[i]);
				}
			}
		}

		else if (opt == 3) {
			cout << endl << "Save car" << endl;
			cout << "ID: ";
			cin >> id;
			cout << "Brand: ";
			cin >> marke;
			cout << "Model: ";
			cin >> modell;
			Auto a(id, marke, modell);
			if (controller.saveAuto(a).getId() == NULL) {
				cout << "Make sure you typed the specifications correctly. " << endl << \
					"Hint: If the ID already exists and you only want to update the car specifications, choose the fifth option :D" << endl;
			}
			else {
				controller.saveAuto(a);
				cout << "The car was successfully saved!" << endl;
			}
		}

		else if (opt == 4) {
			cout << endl << "Delete car" << endl;
			cout << "ID: ";
			cin >> id;
			if (controller.deleteAuto(id).getId() == NULL) {
				cout << "Sorry, the ID of the car you're trying to delete is not in the list..." << endl;
			}
			else {
				controller.deleteAuto(id);
				cout << "The car was successfully deleted!" << endl;
			}
		}

		else if (opt == 5) {
			cout << endl << "Update car" << endl;
			cout << "ID: ";
			cin >> id;
			cout << "Brand: ";
			cin >> marke;
			cout << "Model: ";
			cin >> modell;
			Auto a(id, marke, modell);
			if (controller.updateAuto(a).getId() != NULL) {
				cout << "Sorry, the ID of the car you're trying to update is not in the list..." << endl;
			}
			else {
				controller.updateAuto(a);
				cout << "The car was successfully updated!" << endl;
			}
		}

		else if (opt == 6) {
			cout << endl << "Bye-bye!" << endl;
			break;
		}

		else {
			cout << "Please type a valid option" << endl;
		}
	}
}