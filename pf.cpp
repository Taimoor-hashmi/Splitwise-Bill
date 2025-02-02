#include <iostream>
using namespace std;

int availaibleSeats(int arr[16]){
	bool availaible= false;

	int choice;
	
	for (int i=0;i<16;i++){
		
		cout<<"Availaible seats No: "<<arr[i]<<endl;
	}
	cout<<"Enter seat No on which you want to sit: "<<endl;
	cin>>choice;
	
	for(int i=0;i<16;i++){
		if (choice == arr[i]){
			
			arr[i]=0;
			availaible= true;
		}
		
		if(availaible){
			cout<<"Seat reserved "<<endl;
			break;
		}
		
		
	}
	if(availaible==false){
		cout<<"Seat not availaible";
	}
	return 0;
}

int main() {
    int numMembers;
    float totalBill = 0;
    int seats [16]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    

    // Menu Setup
    string menu[] = {"Steak", "Pizza", "Pasta", "Drink", "Salad"};
    float price[] = {1500, 300, 250, 50, 100}; // Prices of items in Rs
    int numItems = sizeof(menu) / sizeof(menu[0]);

    cout << "Welcome to the restaurant! Here's the menu:\n";
    for (int i = 0; i < numItems; ++i) {
        cout << (i + 1) << ". " << menu[i] << " - " << price[i] << " Rs\n";
    }


    int choice, quantity;
    cout << "\nPlease select items by entering their number. Enter 0 to finish.\n";


    float itemTotal[100] = {0};

    while (true) {
        cout << "Enter item number (0 to finish): ";
        cin >> choice;

        if (choice == 0) break;

        if (choice < 1 || choice > numItems) {
            cout << "Invalid choice! Please select a valid item.\n";
            continue;
        }

        cout << "Enter quantity for " << menu[choice - 1] << ": ";
        cin >> quantity;

        if (quantity <= 0) {
            cout << "Quantity must be greater than 0!\n";
            continue;
        }

        
        itemTotal[choice - 1] += price[choice - 1] * quantity;	
        totalBill += price[choice - 1] * quantity;
    }

    
    char paymentMethod;
    cout << "\nDo you want to pay using (C)ash or (D)ebit/Credit Card? (Enter C/D): ";
    cin >> paymentMethod;

    if (paymentMethod == 'D' || paymentMethod == 'd') {
        // Apply a 16% discount if payment is made by card
        totalBill -= totalBill * 0.16;
        cout << "A 16% discount has been applied! New Total Bill: " << totalBill << " Rs" << endl;
    } else if (paymentMethod == 'C' || paymentMethod == 'c') {
        cout << "No discount applied for cash payment." << endl;
    } else {
        cout << "Invalid payment method entered!" << endl;
        return 1;
    }

    cout << "\nEnter the number of members: ";
    cin >> numMembers;

    if (numMembers <= 0) {
        cout << "The number of members must be greater than 0!" << endl;
        return 1;
    }

    char memberNames[100][50];
    float contributions[100] = {0};
    cout << "Enter the names of the members:" << endl;
    for (int i = 0; i < numMembers; ++i) {
        cout << "Member " << (i + 1) << ": ";
        cin >> memberNames[i];
    }

  
    float perMemberShare = totalBill / numMembers;
    float balance[100]; // To track how much each member owes or is owed
    for (int i = 0; i < numMembers; ++i) {
        balance[i] = contributions[i] - perMemberShare;
    }

    
    cout << "\n--- Splitwise Bill Slip ---\n";
    cout << "Total Bill: " << totalBill << " Rs\n";
    cout << "Number of Members: " << numMembers << "\n";
    cout << "Each Member Owes: " << perMemberShare << " Rs\n";


    cout << "\nItems Ordered:\n";
    for (int i = 0; i < numItems; ++i) {
        if (itemTotal[i] > 0) {
            int quantity = itemTotal[i] / price[i]; // Calculate quantity from item total
            cout << menu[i] << " x " << quantity << " = " << itemTotal[i] << " Rs\n";
        }
    }

   
    cout << "\nBalances:\n";
    for (int i = 0; i < numMembers; ++i) {
        if (balance[i] < 0) {
            cout << memberNames[i] << " owes " << -balance[i] << " Rs\n";
        } else if (balance[i] > 0) {
            cout << memberNames[i] << " is owed " << balance[i] << " Rs\n";
        } else {
            cout << memberNames[i] << " is settled.\n";
        }
    }

    cout << "\n--- Payment Instructions ---\n";
    for (int i = 0; i < numMembers; ++i) {
        if (balance[i] > 0) { // This member is owed money
            for (int j = 0; j < numMembers; ++j) {
                if (balance[j] < 0) { // This member owes money
                    float payment = (balance[i] < -balance[j]) ? balance[i] : -balance[j];
                    if (payment > 0) {
                        cout << memberNames[j] << " should pay " << memberNames[i] 
                             << " " << payment << " Rs\n";
                        balance[i] -= payment;
                        balance[j] += payment; 
                        
                    }
                    
                }
                
            }
            }
    }

    cout << "\n--- End of Bill Slip ---\n";
    
    while(true){
	int choice;
    cout<<endl<<"Do you want to book seat? Press 1 to reserve ";
    cin>>choice;
    if (choice==1){
    	availaibleSeats(seats);
	}
	else{
		break;
	}
    
    
}
    return 0;
}