Splitwise - Restaurant Billing System
Overview:

The Splitwise Restaurant Billing System is a C++ project that helps restaurant-goers split their bills among multiple members. It features the ability to select items from a menu, calculate the total bill, apply discounts for card payments, and distribute the total among all members fairly. Additionally, it allows users to reserve available seats at the restaurant, providing a complete dining experience simulation.

Features:

Dynamic Menu: Allows users to select food items and specify quantities.
Total Bill Calculation: Automatically calculates the total bill and applies discounts based on the payment method.
Seat Reservation: Users can view available seats and reserve a seat for themselves.
Bill Split: Splits the total bill among the members and tracks individual contributions and balances.
Flexible Payment Methods: Users can pay via cash or debit/credit card, with a discount for card payments.
Balances Summary: Displays each member's share and who owes whom based on the split.
How It Works:

The user selects items from the menu, specifying quantities.
The system calculates the total bill.
The user chooses a payment method (cash or card).
The total bill is split among the members, and each member's contribution is calculated.
Available seats are displayed, and users can reserve a seat if desired.
The Splitwise bill slip is generated showing itemized prices, the total, and balances for each member.
How to Run
Clone the repository:
sh
Copy
Edit
git clone https://github.com/taimoor-hashmi/splitwise-restaurant-billing.git
Compile the C++ code using your preferred compiler (e.g., g++, Code::Blocks, Visual Studio).
If you're using g++, you can run:
sh
Copy
Edit
g++ main.cpp -o splitwise
Run the executable:
sh
Copy
Edit
./splitwise
Follow the on-screen instructions to select menu items, payment method, and reserve a seat.
Example Output
mathematica
Copy
Edit
Welcome to the restaurant! Here's the menu:
1. Burger - 150 Rs
2. Pizza - 300 Rs
3. Pasta - 250 Rs
4. Soda - 50 Rs
5. Salad - 100 Rs

Please select items by entering their number. Enter 0 to finish.

Enter item number (0 to finish): 1
Enter quantity for Burger: 2
...
Enter item number (0 to finish): 0

Do you want to pay using (C)ash or (D)ebit/Credit Card? (Enter C/D): D
A 16% discount has been applied! New Total Bill: 450 Rs

Enter the number of members: 3
Member 1: Taimoor
Member 2: Ahmed
Member 3: Sarah
...
Technologies Used
C++
Basic I/O Operations
