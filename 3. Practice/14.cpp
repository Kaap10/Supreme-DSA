//Hello World likhna hai 
#include<iostream>
#include<math.h>
using namespace std;

// int main() {
//     //finding quotient & remainder of numbers taken by user
//     int a;
//     int b;

//     cout << "First Number is: "<<endl;
//     cin >> a;

//     cout << "Seconf number is: "<<endl;
//     cin >> b;

//     //remainder nikalne ka formula -> divident ko divisior se divide krdo in this case a/b hojayega
//     int quotient = a/b;

//     //quotient nikalne ke liye -> % ka istemaal kiya jata hai formula -> a%b
//     int remainder = a%b;

//     cout << "Remainder of a and b is: "<<remainder<<endl;
//     cout << "Quotient of a and b is: "<<quotient<<endl;
//     return 0;
// }

//Size of variable nikalna ho toh->
// int main() {
//     // int n;
//     // cin>>n;

//     cout << "Size:"<<sizeof(int)<<endl;
//     cout << "Size:"<<sizeof(float)<<endl;
//     cout << "Size:"<<sizeof(char)<<endl;
//     cout << "Size:"<<sizeof(double)<<endl;
//     // cout << "Size of n is: "<<result<<endl;
//     return 0;
// }

//swapping krni hai using third variable
// int main() {
//     int a;
//     int b;
//     int temp;
//     cin >>a;
//     cin >>b;
//     cin >>temp;

//     cout << "Before sawpping"<<endl;
//     cout << "a=" <<a <<" b= "<<b<<endl;

//     temp = a;
//     a = b;
//     b = temp;

//     cout << "After swapping"<<endl;
//     cout << "a="<<a<<" b= "<<b<<endl;
//     return 0;
// }

//Mereko ASCII value chaiye kisi bhi ki
// int main() {
//     char c;
//     cout << "enter the variable: ";
//     cin>> c;

//     cout << "ASCII value of  "<<c<<"is: "<<int(c)<<endl;
//     return 0;
// }

//MULTIPLY TWO NUMBER number entered by user
// int main() {
//     int a;
//     int b;

//     cout << "Enter the First number: ";
//     cin >> a;

//     cout << "Enter the Second number: ";
//     cin >>b;

//     int mul = a*b;
//     cout<< "Multiply of "<<a<<" & "<<b<<" is "<<mul<<endl;
//     return 0;
// }

// int main() {
//   int n;

//   cout << "Enter an integer: ";
//   cin >> n;

//   if ( n % 2 == 0)
//     cout << n << " is even.";
//   else
//     cout << n << " is odd.";

//   return 0;
// }

//Given Input is Vowel or Consonants
// int main() {
//     char c;
//     cout << "Enter the character: ";
//     cin >> c;

//     int Lower_case;
//     int Upper_case;

//     Lower_case = (c=='a' || c=='e' || c=='i'|| c=='o' || c=='u' );
//     Upper_case = (c=='A' || c=='E' || c=='I'|| c=='O' || c=='U' );

//     if(!isalpha(c)) {
//         cout << "Error!"<<endl;
//     }
//     else if(Lower_case || Upper_case) {
//         cout << c << " is a Vowel."<<endl;
//     }
//     else {
//         cout << c << " is not a Vowel"<<endl;
//     }
// }

//find the largest number
// int main() {
//     int a,b,c;
//     cin >>a, b, c;

//     if(a>=b && a>=c) {
//         cout << "A is the biggest elene"
//     }
// }

// int main() {
//     int a, b, c, D, x1, x2;
//     cin >>a >>b>>c;
//     D = b*b - 4*a*c;

//     if(D>0) {
//         x1 = (-b + sqrt(D))/(2*a);
//         x2 = (-b + sqrt(D))/(2*a);
//         cout << "x1 is: "<<x1<endl;
//         cout << "x2 is: "<<x2<endl;
//     }

//     else if(D=0) {
//         x1 =(-b/(2*a));
//     }
//     else {
//         int imaginary = (-b/(2*a));
//         int real = sqrt(D/(2*a));
//     }
//     return 0;
// }

//sum  of natural numbers;
// naatural numbes -> 1,2,3,

// int main() {
//     int n;
//     cout << "Enter +ve number: ";
//     cin >> n;
//     int sum =0;
//     for (int i=1; i<n; i++) {
//         sum = sum + i;
//     }
//     cout << "Sum is: "<<sum;
//     return 0;
// }
// int main() {
//     int year;
//     cout << "Enter year: ";
//     cin >> year;

//     if(year % 400 == 0) {
//         cout << year << "is not a leap year";
//     }

//     else if (year % 100 == 0 ) {
//         cout << year << "is not a leap year";
//     }

//     else if (year % 4 == 0) {
//         cout << year << " is a leap year ";
//     }

//     else {
//         cout << year << " is not a leap year";
//     }
// }

// int main() {
//     //mereko leap yea rchaiye 
//     // toh year%400 == 0 hona chaiye 
//     // or !year%100==0 && year%4==0 (matlba 4 vala hona chaiye and 100 vaka hi hona chaie)

//     int year;
//     cout << "Enter year: ";
//     cin >> year;

//     if((year%4==0 && year%100 != 0) || year%400 == 0) {
//         cout << "Year is Leap year";
//     }
//     else {
//         cout << "Year is not leap year";
//     }

//     return 0;
// }

// int main() {
//     //factorial nikalna hai mereko
//     int n;
//     cout << "Enter number: ";
//     cin >> n;
//     int fact= 1;
//     if(n<0) {
//         cout << "Invalid number";
//     }
//     else {
//         for (int i=1; i<=n; i++) {
//             fact = fact * i;
//         }
//         cout << fact;
//     }
//     return 0;
// }

//Check Prime
// int main() {
//     int n;
//     bool prime = true;
//     cout << "Enter the number: ";
//     cin >> n;

//     //base case
//     if( n==0 || n==1) {
//         prime = false;
//         }

//     for(int i=2; i<n/2; i++) {
//         if(n%i==0) {
//             prime = false;
//             break;
//         }
//     }
//     if(prime) {
//         cout << "Prime Number";
//     }
//     else {
//         cout << "Not a prime number";
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int mul = 0;
//     for (int i=0; i<=10; i++) {
//         mul = n * i;
//         cout <<n<<" * "<<i<< " : "<<mul <<endl;
//     }
//     return 0;
// }

//ab mereko fibonacci series chaiye ok?
// 0 1 1 2 3 5

int main() {
    int n;
    cout << "Enter the digit";
    cin >> n;

    int n1 = 0;
    int n2 = 1;
    int nextTerm = 0;

    for (int i=1; i<=n; i++) {
        if(i==1) {
            cout << n1;
            continue;
        }
        if (i==2) {
            cout <<n2;
            continue;
        }
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;

        cout << nextTerm;
    }
    return 0;
}

















