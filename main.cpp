#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main() {
//problem1
   /*int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;;
    if (num<=-1) {
        cout<<"Your number is negative: "<<num<<endl;
    }    else if (num>=1) {
        cout<<"Your number is postivie: "<<num<<endl;
    }else {
        cout<<"Your number is zero: "<<num<<endl;
    }*/

//problem2
    /*int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    if (number%2==0) {
        cout<<"The number is even "<<endl;
    } else
        cout<<"The number is odd"<<endl;*/

//problem3
    /*int a,b;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    if (a>b) {
        cout<<"The biggest number is "<<a<<endl;
    }else {
        cout<<"The biggest number is "<<b<<endl;
    }*/
//prolem4
    /*int a,b,c;
    cout<<"Enter the three numbers: "<<endl;
    cin>>a>>b>>c;
    if (a>b && a>c){
        cout<<"The biggest number is: "<<a<<endl;
}else if (b>c && b>a) {
    cout<<"The biggest number is "<<c<<endl;
}   else
    cout<<"The biggest number is "<<c<<endl;*/

    //problem5
 /*int year;
    cout<<"Enter the year "<<endl;
    cin>>year;
    if (year%4==0&&year%100!=0||year%400==0) {
        cout<<"It is a leap year"<<endl;
    }else {
        cout<<"It is not a leap year "<<endl;
    }*/

    //problem6
/*int speed;
    cout << "Enter speed: ";
    cin>>speed;
    if (speed<20) {
        cout<<"Too slow "<<endl;
    }else if (speed>80) {
        cout<<"Too fast "<<endl;
    }else{}*/

//problem7
    /*int mark;
    cout<<"Enter the mark";
    cin>>mark;
    if (mark<50) {
        cout<<"FAIL, o'qi so'taqo'zi!!!";
    }else
        cout<<"PASS, o'tding bratishka/";*/

//problem8
    /*int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    if(num<0)
        cout<<"The number is negative";
    else if  (num>0)
        cout<<"The number is positive";
    else cout<<"The number is zero";*/

//problem9
   /* char harf;
    cout<<"Enter one letter(g , y or r)";
    cin>>harf;
    if (harf=='g')
        cout<<"Go!"<<endl;
    else if (harf=='y')
        cout<<"Get ready!"<<endl;
    else cout<<"Stop";*/

//problem10
/*int grade;
cout<<"Enter your grade: "<<endl;
cin>>grade;
if(grade>=90&&grade<=100){
cout<<"A"<<endl;
} else if(grade<=89&&grade>=80){
cout<<"B"<<endl;
}else if(grade<=79&&grade>=70){
cout<<"C"<<endl;
}else if(grade<=69&&grade>=60){
cout<<"D"<<endl;
}else if(grade<=59){
cout<<"F"<<endl;}
else
cout<<"You can not take a score bigger than 100"<<endl;*/

//problem11
/*int num1, num2;
cout<<"Enter two numbers"<<endl;
cin>>num1>>num2;
if(num1%num2==0){
cout<<num1<<" is divisible by "<<num2<<endl;
}else {
cout<<num1<<" is not divisible by "<<num2<<endl;
}*/

//problem12
/*float angl1, angl2, angl3;
int sumangl;
cout<<"Enter the first angel :";
cin>>angl1;
cout<<"Enter the second angel :";
cin>>angl2;
cout<<"Enter the third angel :";
cin>>angl3;
sumangl=angl1+angl2+angl3;
if(angl1>0&&angl2>0&&angl3>0&&sumangl==180){
cout<<"The trienge is valid";}
else{ cout<<"The trienge is invalid";}*/

//problem13
char letter;
cout<<"Harf kirting";
cin>>letter;
if(isalpha(letter)){
if(isupper(letter)){
cout<<"Uppercase alphabet"<<endl;
} else if(islower(letter)){
cout<<"Lowercase alphabet"<<endl;
} else {
   cerr<<"It is not an alphabet!"<<endl;}
}
//problem14
/*float price1, price2;
int weight1, weight2;
float realcost1, realcost2;
cout << "Enter Price 1 : ";
cin >> price1;
cout << "Enter Price 2 : ";
cin >> price2;
cout << "Enter Weight 1 : ";
cin >> weight1;
cout << "Enter Weight 2 : ";
cin >> weight2;
realcost1=price1/weight1;
realcost2=price2/weight2;
if(realcost1<realcost2&&price1>0&&price2>0&&weight1>0&&weight2>0){
cout<<"First one is more cheaper than second one"<<endl;}
else if(realcost1>realcost2&&price1>0&&price2>0&&weight1>0&&weight2>0){
cout<<"The second one is more cheaper than first one"<<endl;
}else if(realcost1==realcost2){
 cout<<"Both of them are equal"<<endl;}
else{ cout<<"You have entered wrong information!"<<endl;}*/

//problem15
/*int num, a,c;
cout<<"Enter the number, it must be three-digit number!";
cin>>num;
a=num/100;
c=num%100;
if(a==c&&num<=999&&num>=100){
cout<<"The number is Palindrome number";}
else {
cout<<"The number is not Palindrome number";}
*/

//problem16
int x2,y2, x1=0, y1=0;
double r;
cout<<"Enter the point(x,y), now enter x:";
cin>>x2;
cout<<"Enter y:";
cin>>y2;
r=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
 if(r>10||r<0){
     cout<<"Kiritgan nuqtangiz, markazi (0, 0), radiusi 10 bo'lgan aylana ichida";
 }
 else{
     cout<<"Kiritgan nuqtangiz, markazi (0, 0), radiusi 10 bo'lgan aylana ichida";
 }

//problem17
/*float gpa;
cout << "Enter GPA: ";
cin >> gpa;
if(gpa>=4&&gpa<=4.5){
cout<<"You get 80% schoolarship"<<endl;
} else if(gpa<4&&gpa>=3.5){
cout<<"You get 60% schoolarshi["<<endl;}
else if(gpa<3.5&&gpa>=3){
cout<<"You get 50% schoolarshi["<<endl;}
else if(gpa>4.5){
cout<<"Aldama!"<<endl;}
else{
cout<<"No schoolarship"<<endl;}*/
return 0;
}