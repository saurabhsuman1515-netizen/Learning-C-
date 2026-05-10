#include <iostream>
using namespace std;
int main(){
 while(true){
  cout<<"Hello World!"<<endl;   
    break;
    }
}

#include <iostream>
using namespace std;
int main(){
    int n = 5;
    while(n--){
        cout<<"Hello World!"<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int sum = 0;

    for(int i = 1; i <= 5; i++) {
        sum = sum + i;
    }

    cout << "Sum = " << sum;

    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int i = 1;

    while(i <= 5) {
        cout << i << endl;
        i++;
    }

    return 0;
}