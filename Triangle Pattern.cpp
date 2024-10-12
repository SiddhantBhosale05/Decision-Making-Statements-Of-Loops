//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implementation of Decision Making Statements Loops to print Triangle Pattern

#include <iostream>
using namespace std;

int main(){
   
    int n;

    cout<<"Enter The Value for n: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


/*Output:
Enter The Value for n: 5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
*/
