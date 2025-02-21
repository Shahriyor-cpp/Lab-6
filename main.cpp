#include <iostream>
using namespace std;

//#1.1
// int main() {
//     int sum=0;
//     for(int i=1;i<=100;i++) {
//         sum+=i;
//     }
//     cout<<sum;
// }
//#1.2
// int main() {
//     int sum=0,n;
//     cin>>n;
//     for(int i=1;i<=n;i++) {
//         sum+=i;
//     }
//     cout<<sum;
// }

//#2.1
// int main() {
//     int prime=2,count=0;
//     for(; count<10; prime++) {
//         bool isPrime=true;
//         for(int i=2; i*i<=prime; i++) {
//             if(prime%i==0) {
//                 isPrime=false;
//                 break;
//             }
//         }
//         if(isPrime==true) {
//             cout<<prime<<" ";
//             count++;
//         }
//     }
//     cout<<endl;
// }
//#2.2
// int main() {
//     int n, count = 0, num = 2;
//     cin >> n;
//     while (count < n) {
//         bool prime = true;
//         int i = 2;
//         while (i <= num / 2) {
//             if (num % i == 0) {
//                 prime = false;
//                 break;
//             }
//             i++;
//         }
//         if (prime) {
//             cout << num << " ";
//             count++;
//         }
//         num++;
//     }
//     return 0;
// }

//#3
// int main() {
//     int n;
//     cin >> n;
//     while(n!=1) {
//         if(n%2==0) {
//             n=n/2;
//         }else {
//             n=3*n+1;
//         }
//     cout << n << endl;
//     }
// }

//#4
// int main() {
//     int n,s=0;
//     cin >> n;
//     while(n!=0) {
//         n%10;
//         n=n/10;
//         s++;
//     }
//     cout << s << endl;
// }

//#5
// int main() {
//     int n,s=0;
//     cin >> n;
//     while(n!=0) {
//         s=s*10+n%10;
//         n=n/10;
//     }
//     cout << s << endl;
// }

//#6
// int main() {
//     int a,b,temp;
//     cin>>a>>b;
//     while(b!=0) {
//         temp=b;
//         b=a%b;
//         a=temp;
//     }
//     cout<<a<<endl;
// }

//#7
// int main() {
//     int sum=0;
//     int i=0;
//     do {
//         int input;
//         cin>>input;
//         sum+=input;
//         i++;
//     }while(sum<100);
//     if(sum>=100) {
//         cout<<sum<<" "<<"Sum is >100"<<endl;
//         cout<<"Total inputs"<<" "<<i<<endl;
//     }
// }

//#8
// int main() {
//     int n=500,money;
//     char A;
//     cout<<"Your balance is: "<<n<<endl;
//     cout<<"Enter 0 to cancel:";
//     cin>>A;
//     switch (A) {
//         case '0':
//             cout<<"Cancelled"<<endl;
//         break;
//         default:
//             while(n>0){
//                 cout<<"Enter money to withdraw: ";
//                 cin>>money;
//                if (n<money) {
//                    cout<<"Insufficient"<<endl;
//                    break;
//                }else {
//                    n=n-money;
//                }
//
//                 cout<<n<<" money left"<<endl;
//             }
//     }
// }

//#9
// int main() {
//     char c;
//     cout << "Please enter a Y or N ";
//     cin>> c;
//     do {
//
//
//         if(c=='Y'|| c=='N') {
//             cout<<"You entered a Y or N";
//             break;
//         }
//         else {
//             cout<<"Invalid Input";
//             cin>>c;
//         }
//     }while(c!='Y' || c!='N');
//
//     return 0;
// }

//#10

// int main() {
//     string c;

//     do {
//         cout << "Do whatever you want:" << endl;
//         cin>> c;
//         if(c=="Exit") {
//             cout<<"Goodbye";
//             break;
//         }
//         else {
//             cout<<"nice "<<endl;
//         }
//     }while(c!="Exit");

//     return 0;
// }

//#11
// int main() {
//     int a,b,result=0;
//     string action;
//     cout<<"Enter 2 numbers number:";
//     cin>>a>>b;
//     do {
//         cout<<"Choose action:";
//         cin>>action;
//         if(action=="add") {
//             result=a+b;
//         }else if(action=="sub") {
//             result=a-b;
//         }else if(action=="mul") {
//             result=a*b;
//         }else if(action=="div") {
//             result=a/b;
//         }else {
//             cout<<"Wrong action";
//         }
//         cout<<result<<endl;
//     }while(action!="exit");
// }

//#12

// int main() {
//     int password,count=3,real=1234;
//     do {
//         cout<<"Enter password: ";
//         cin>>password;
//         if(password!=real) {
//             count--;
//             cout<<"Wrong password!"<<endl;
//         }else {
//             cout<<"Access granted"<<endl;
//             break;
//         }
//     }while (count>0);
// }

//#13
// int main() {
//     int guess,real=1234;
//     do {
//         cout<<"Enter number: ";
//         cin>>guess;
//         if(guess!=real && guess<1234) {
//             cout<<"Too low!"<<endl;
//         }
//         else if (guess!=real && guess>1234) {
//             cout<<"Too high!"<<endl;
//         }else {
//             cout<<"Correct"<<endl;
//             break;
//         }
//     }while (guess!=real);
// }
