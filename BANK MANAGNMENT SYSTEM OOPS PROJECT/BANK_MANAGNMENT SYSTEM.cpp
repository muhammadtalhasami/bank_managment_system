#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
static int balance=500000;
//class OTP
class OTP {
    private:
        int value;
        time_t expirationTime;
    public:
        OTP(int value) {
            this->value = value;
            this->expirationTime = time(NULL) + 60;  // OTP expires in 60 seconds
        }
        int getValue() {
            return value;
        }
        bool isExpired() {
            return time(NULL) > expirationTime;
        }
};

// OTPManager class to manage OTPs-
class OTPManager {
    private:
        OTP *otp;
    public:
    	//function that generate random number for otp
        void generateOTP() {
            int value = rand() % 10000 + 1000;//rand keyword for random number
            otp = new OTP(value);
            cout<<"________"<<endl;
            cout << "YOUR OTP IS: " << otp->getValue() << endl;
            cout<<"________"<<endl;
        }
        bool verifyOTP(int value) {
            if (otp->getValue() == value && !otp->isExpired()) {
                delete otp;
                return true;
            }
            else {
                cout << "Invalid OTP or expired" << endl;
                delete otp;
                return false;
           }
}
};
//class bankmanagement 
class bankmanagement
{
private:

string name;
int withdraw;
int year,code=4455;
int amount;
int password;
float interest=0.1;
public:
//function name which check the user name
string inname()
{
	string name="rabia";
    return name;
}
//function password which check the user password
int inpassword()
{
	int password=1234;
    return password;
}
//function that show accout detail 
void detailacc()
{

cout<<"name :"<<inname()<<endl;
cout<<"balance in your account:"<<balance<<endl;
cout<<"code :"<<"42401-"<<code<<"-1245672"<<endl;
}

//funtion which widraw the amount 
int with_draw()
{
OTPManager otpmanager;//class object define
int rupees;
cout<<"total balance in the bank Rightnow :- Rs"<<endl;
cout<<balance<<endl;
cout<<"enter the amount you want to withdraw"<<endl;
cin>>rupees;
balance=balance-rupees;
otpmanager.generateOTP();
cout<<"balance after withdraw is"<<endl;
cout<<balance<<endl;

return balance;
}
//function that check the card expiery
void checking()
{
int current_year,y1;
cout<<"enter the current year"<<endl;
cin>>current_year;
cout<<"enter the your card year:"<<endl;
cin>>year;
y1=current_year-year;
if(y1>=0 && y1<=10)
{
cout<<"your bank card is not expired"<<endl;
}
else if(y1>10)
{
cout<<"your bank card is expired"<<endl;
}
else
cout<<"invalid entry"<<endl;
}
//function which add amount 
int addamount()
{
	OTPManager otpmanager;//class object define
cout<<"total balance in the bank Rightnow :- Rs"<<endl;
cout<<balance<<endl;
cout<<"enter the amount you want to add"<<endl;
cin>>amount;
balance=balance+amount;
otpmanager.generateOTP();
cout<<"balance after adding an amount is"<<endl;
cout<<balance<<endl;

return balance;
}
//function which perform transection
int transamount()
{
int n;
OTPManager otpmanager;//class object define
cout<<"PRESS 1: IF YOU WANTS TO TRANSFER AN AMOUNT TO TALHA"<<endl;
cout<<"PRESS 2: IF YOU WANTS TO TRANSFER AN AMOUNT TO ARHAM"<<endl;
cout<<"PRESS 3: IF YOU WANTS TO TRANSFER AN AMOUNT TO MUJTABA"<<endl;
cout<<"PRESS 4: IF YOU WANTS TO TRANSFER AN AMOUNT TO REHMAN"<<endl;
cin>>n;
cout<<"total balance in the bank Rightnow :- Rs"<<endl;
cout<<balance<<endl;-
cout<<"enter the amount you want to transfer"<<endl;
cin>>amount;
balance=balance-amount;
cout<<"balance remaining in your acc after transfer"<<endl;
cout<<balance<<endl;

if(n==1)
{
	otpmanager.generateOTP();
cout<<"Rs-"<<amount<<";"<<"Amount is successfully transfer to TALHA"<<endl;
}
else if(n==2)
{
    otpmanager.generateOTP();
cout<<"Rs-"<<amount<<" "<<"Amount is successfully transfer to ARHAM"<<endl;
}
else if(n==3)
{
    otpmanager.generateOTP();
cout<<"Rs-"<<amount<<" "<<"Amount is successfully transfer to MUJTABA"<<endl;
}
else if (n==4)
{
    otpmanager.generateOTP();
cout<<"Rs-"<<amount<<" "<<"Amount is successfully transfer to REHMAN"<<endl;
}
return balance;
}
//function for making new card
void newcard()
{
int date,exp_date;
char month;
cout<<"enter your name code and year"<<endl;
cin>>name>>code>>year;
cout<<"enter date and month"<<endl;
cin>>date>>month;
exp_date=year+10;

cout<<"NEW CARD GENERATED SUCCESSFULLY"<<endl;

cout<<".____________________________."<<endl;
cout<<"|                            |"<<endl;
cout<<"|"<<name<<"                       |"<<endl;
cout<<"|"<<"42401-"<<code<<"-12567334"<<"           |"<<endl;
cout<<"|"<<date<<"-"<<month<<"-"<<year<<"                   |"<<endl;
cout<<"|                            |"<<endl;
cout<<"|                            |"<<endl;
cout<<"|                            |"<<endl;
cout<<"|            A   R           |"<<endl;
cout<<"|          M (BMS) T         |"<<endl;
cout<<"|                            |"<<endl;
cout<<"|                            |"<<endl;
cout<<"|                            |"<<endl;
cout<<"|                            |"<<endl;
cout<<"|                            |"<<endl;
cout<<"|Exp_date:-"<<date<<"-"<<month<<"-"<<exp_date<<"         |"<<endl;
cout<<"|____________________________|"<<endl;
}
//function that provide contact information
void emergencycase()
{
cout<<"FOR EMERGENCY CASE"<<endl;
cout<<"CONTACT US ON PHONE NO:- 0333-1234567"<<endl;
cout<<"             OR                "<<endl;
cout<<"VIST OUR WEBSITE:- http//mart.edu.com"<<endl;
}
//function that show yearly interest
void a_interest()
{
	cout<<"YOUR ANUAL INTEREST IS : "<<balance*interest<<endl;
	cout<<"BALANCE AFTER ADDING INTEREST :	\n";
	balance=balance+(balance*interest);
}



};

//main 
int main()
{
cout<<"._________________________________________."<<endl;
cout<<"|                                         |"<<endl;
cout<<"|                                         |"<<endl;
cout<<"|       MART BANK MANAGEMENT SYSTEM       |"<<endl;
cout<<"|                                         |"<<endl;
cout<<"|_________________________________________|"<<endl;

bankmanagement b;//class object define
OTPManager otpmanager;//class object define

string n;
int p;

cout<<"ENTER YOUR NAME :"<<endl;
cin>>n;
cout<<"ENTER PASSWORD  :"<<endl;
cin>>p;
//if condition that check if name and password is correct it allow the user to visit 
if((b.inname() == n) && (b.inpassword() == p))
{
	otpmanager.generateOTP();
	cout<<"\n\n";

    cout<<"\n\t\t   ATM MACHINE   "<<endl;
    cout<<"\t\t.______________."<<endl;
    cout<<"\t\t|              |"<<endl;
    cout<<"\t\t|              |"<<endl;
    cout<<"\t\t|    SCREEN    |"<<endl;
    cout<<"\t\t|              |"<<endl;
    cout<<"\t\t|______________|"<<endl;
    cout<<"\t\t|______________|"<<endl;
    cout<<"\t\t| °°°     o |"<<endl;
    cout<<"\t\t|              |"<<endl;
    cout<<"\t\t| []           |"<<endl;
    cout<<"\t\t|  Card port   |"<<endl;
    cout<<"\t\t|              |"<<endl;
    cout<<"\t\t|              |"<<endl;
    cout<<"\t\t|              |"<<endl;
    cout<<"\t\t|______________|"<<endl;
    
    
char ans;
do
{

int n;

    cout<<"\nPRESS: 1 IF YOU WANT TO KNOW YOUR ACC DETAIL"<<endl;
    cout<<"PRESS: 2 IF YOU WANT TO WITHDRAW AMOUNT"<<endl;
    cout<<"PRESS: 3 CHECKING BANK CARD IS EXPIRED OR NOT"<<endl;
    cout<<"PRESS: 4 IF YOU WANT TO ADD AMOUNT "<<endl;
    cout<<"PRESS: 5 IF YOU WANT TO TRANSFER AMOUNT "<<endl;
    cout<<"PRESS: 6 IF YOU WANT TO MAKE NEW CARD "<<endl;
    cout<<"PRESS: 7 IF YOU WANT TO CHECK YOUR ANNUAL INTEREST "<<endl;
    cout<<"PRESS: 8 IF YOU WANT TO CONTACT US IN EMERGENCY CASE "<<endl;
    cin>>n;
    
    bankmanagement b1;
 //conditions that call the function as per the requirment   
if(n==1)
b1.detailacc();
else if(n==2)
b1.with_draw();
else if(n==3)
b1.checking();
else if (n==4)
b1.addamount();
else if(n==5)
b1.transamount();
else if(n==6)
b1.newcard();
else if (n==7)
b1.a_interest();
else if(n==8)
b1.emergencycase();
else
cout<<"in-valid"<<endl;

cout<<"\n DO YOU WANT TO CONTINUE (Y/N)"<<endl;
cin>>ans;


}
//loop that run until user want
while ((ans=='Y')||(ans=='y'));
system ("pause");

  
}
//condition execute if name and password is incorrect
	else
	{
	    cout<<"____________"<<endl;
		cout<<"WRONG USERNAME AND PASSWORD\n\nXXXXXXXXXXXXXXXXXXXXXXXX\n\nPLEASE ENTER THE CORRECT ONE"<<endl;
		cout<<"____________"<<endl;
	}
return 0;
}
