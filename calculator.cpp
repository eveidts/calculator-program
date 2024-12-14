#include <iostream>
#include <vector>
using namespace std;



int main(){
    vector <int> result; //store the number
    vector<int> no;

    int num = 0 ;
    int input = 0 ;
    char op = '0';

    while(true){
    cout << "\n calculator \n";
    cout << "\nThis program will calculate two number \n";
    cout << "1.calculate " << endl;
    cout << "2.exit " << endl;
    cout << "enter your choice: ";
    cin >>input;
    if(input==1){
        result.clear();
        no.clear();

        cout << "enter number: ";
        cin >> num;
        result.push_back(num);
        no.push_back(num);

        while(true){
                    cout << "enter the operation(+,-,%,*) or (=)to get result : "; 
        cin >> op;
                if (op=='='){
             cout << "result: " << no.back() << endl; //show the last result
            break;
        }
                 cout << "enter number: ";
          cin >> num;
         result.push_back(num);
        

            switch (op){
        case '+':
              no.push_back(no.back() + result.back());
             break;
        case '-':
        no.push_back(no.back() - result.back());
        break;
        case '*':
        no.push_back(no.back() * result.back());
        break;
        case '%':
        if(result.back()!=0){
            no.push_back(no.back() % result.back());
        }
        else{
            cout << "divide is not possible with 0" << endl;
        }
        break;
        default:
        cout << "invalid operator please try again \n";
        continue;
        
    }
        }
        }
        
    else if (input==2){
        cout << "exited the program";
        break;
    }
   else {
    cout << "invalid input" << endl;
   }
    }
    return 0;
    }
