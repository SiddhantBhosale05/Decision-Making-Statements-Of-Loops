//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implemention of Decision Making Statements Loops to print Inverted Star pattern Triangle

#include <iostream>
using namespace std;
 
int main() {
    int n;
 
    cout<<"Enter The Value for n: ";
    cin>>n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
 
    return 0;
}


/*Output:
Enter The Value for n: 5
* * * * * 
* * * * 
* * * 
* * 
* 
*/