#include <iostream>
using namespace std;

class Account {
    const long accNo;
    long transId;
    string type;
    double balance;

public:
    Account(long a) : accNo(a) {
        balance = 0;
        transId = 0;
    }

    long depositAmount(const long to, const long from, const double amount) {
        balance += amount;
        transId++;
        type = "credit";
        return transId;
    }

    long creditAmount(const long to, const long from, const double amount) {
        balance -= amount;
        transId++;
        type = "debit";
        return transId;
    }

    void displayDetails() const {
        cout << "Account: " << accNo << endl;
        cout << "Balance: " << balance << endl;
        cout << "Last Transaction: " << type << endl;
    }
};

int main() {
    Account a1(1001), a2(1002);

    a1.depositAmount(1001, 1002, 500);
    a1.creditAmount(1001, 1002, 200);

    a1.displayDetails();

    return 0;
}