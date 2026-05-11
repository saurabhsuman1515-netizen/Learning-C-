// conditionals statement
// Take +ve integer and tell if it is even or odd ?

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     if(n%2==0)
//       cout<<"even number:";
//     if(n%2!=0)
//       cout<<"odd number:";
//     return 0;
// }

// or, another method

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number : ";
//     cin>>n;
//     if(n%2==0){cout<<"it is even number";}
//     else{cout<<"it is odd number";}
//     return 0;
// }

// take a positive integer amd find it is divide by 5 or not?

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Given number is:";
//     cin>> n;
//     if(n%5==0){
//         cout<<"divisible";
//       }
//       else{cout<< "Not divisible";}
//       return 0;
// }

// ABSOLUTE VALUE = MATHEMATICS MODULUS

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "given number is : ";
//     cin>> a;
//     if(a>=0){
//         cout<<a;
//     }
//     else{
//         cout<<-a;
//     }
//     return 0;
// }

// Ques: If cost price and selling price of an item is input through the keyboard,
//  write a program to determine whether the seller has made profit or incurred
//  loss or no profit no loss. Also determine how much profit he made or loss he incurred.

// #include <iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"selling price : ";
//     cin>>x;
//     cout<<"cost price : ";
//     cin>>y;
//     if(x>y){
//         cout<<"profit"<< endl;
//         cout<<x-y;
//     }
//     if(y>x){
//         cout<<"loss"<< endl;
//         cout<<y-x;
//     }
//     if(x=y){
//         cout<<"no profit no loss";
//     }
//     return 0;
// }

// Ques.take three number print least three of them

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     if(a>=b){
//         if(c>b)
//         cout<<b<<" is lowest";
//         else
//         cout<<c<<" is lowest";
//     }
//     else{
//         if(c>a){
//             cout<<a<<" is lowest";
//         }
//         else{
//             cout<<c<<" is lowest";
//         }
//     }
//      return 0;
// }

// take the no, that is divisible by 3 or 5 but not divisible by15

// #include <iostream>
// using namespace std;
// int main(){
// int a;
// cin>>a;
// if((a%3==0||a%5==0)&&(a%15!=0)){
//   cout <<" is required number"<<endl;
// }
//   else{
//   cout<<"is not required number";
// }
// }

// traingle proof by sides

// #include <iostream>
// using namespace std;
// int main()
// int a,b,c;
// cin>>a>>endl;
// cin>>b>>endl;
// cin>>c>>endl;
// if(a+b>c&&b+c>a&&c+a>>b)

// #include <iostream>
//     using namespace std;
//     int main()
//     {
//         int n;
//         cin >> n;
//         if ((n || n - 1) % 2 == 0)
//         {
//             int sum = 0;
//             int i = 0;
//             while (i <= n)
//             {
//                 sum += i;
//                 i += 2;
//             }
//             cout << sum;
//         }
//     }