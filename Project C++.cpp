#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;
class Bank
{
	public:
		void get()
		{
			
			cout<<"                                *****************************************"<<endl;
		    cout<<"                                ** Lovely Professional University Bank **"<<endl;
		    cout<<"                                *****************************************"<<endl;
			cout<<"1.New Customer"<<endl;
			cout<<"2.Existing Customer"<<endl;
			cout<<endl;
			cout<<endl;
		}
};
int main()
{
	system("color 03");
	system("color 5a");
	Bank obj;
	obj.get();
	int ch;
	cout<<"Choose the above options : "<<endl;
	cin>>ch;
	ofstream fobj;
	fobj.open("Customer Details.txt",ios::app);
	cout<<endl;
	switch(ch)
	{
		case 1:
			int choice1;
			int choice2;
			int choice3;
			char fullname[20];
			int number;
			char address[20];
			int aadharnbr;
			int pan;
			char ssc[10];
			char photo[10];
			int age;
			char fingerprint[10];
			char sign[20];
			int date;
			char mail[50];
			
			cout<<"                                ********Welcome to Lovely Bank Services********"<<endl;
			cout<<"Open New Account"<<endl;
			cout<<"\n1.Are you intrested to open an Account in our bank (type 1 to continue else type 2 to Decline)";
            cin>>choice1;
				if(choice1==1)
				{
					fobj<<"                            Customer"<<endl;
					fobj<<endl;
					fobj<<"Date:";
					cout<<"Enter the Date :"<<endl;
					cin>>date;
					fobj<<date<<endl;
					fobj<<"Name:";
					cout<<"enter your Full name : "<<endl;
					cin>>fullname;
					fobj<<fullname<<endl;
					fobj<<"Phone number:";
					cout<<"Phone number : "<<endl;
					cin>>number;
					fobj<<number<<endl;
					fobj<<"Address:";
					cout<<"Enter your Address : "<<endl;
					cin>>address;
					fobj<<address<<endl;
					fobj<<"Aadhar card details:";
					cout<<"upload your aadhar card number : "<<endl;
					cin>>aadharnbr;
					fobj<<aadharnbr<<endl;
					fobj<<"Pan card number:";
					cout<<"Enter Pan card number : "<<endl;
					cin>>pan;
					fobj<<pan<<endl;
					fobj<<"10th marks list:";
					cout<<"Attach your 10th marks list(char) : "<<endl;
					cin>>ssc;
					fobj<<ssc<<endl;
					cout<<"Attach your photo (char) : "<<endl;
					cin>>photo;
					fobj<<"Age:";
					cout<<"Enter your Age : "<<endl;
					cin>>age;
					fobj<<age<<endl;
					fobj<<"E-mail:";
					cout<<"Enter your e-mail: ";
					cin>>mail;
					fobj<<mail<<endl;
					fobj<<"Finger print details:";
				    cout<<"Place your finger(Which is assigned to your aadhar account) to verify your aadhar number (char) : "<<endl;
				    cin>>fingerprint;
				    fobj<<fingerprint<<endl;
				    fobj<<"Signature:";
				    cout<<" Sign under Signature (char) : "<<endl;
				    cin>>sign;
				    fobj<<sign<<endl;
				    cout<<"\n1.Choose your Account type (Click 1 for Savings Account else click 2 for current account) : ";
				    cin>>choice2;
				    {
				    	{
				    		if(choice2==1)
				    		{
				    			cout<<"Your account is assigned to Savings"<<endl;
							}
							else if(choice2==2)
							{
								cout<<"your Account is assigned to Current"<<endl;
							}else
							{
								cout<<"You entered a wrong choice"<<endl;
							}
						}
					}
					cout<<"\n1.Have you paid your Account opening Balance? (Type 1 to proceed further process else type 2 )"<<endl;
				    cin>>choice3;
				    {
					if(choice3==1)	
					{
						cout<<"Your Account number is: 134545000023"<<endl;
						cout<<"Your Username is: Clay Janson"<<endl;
						cout<<"your Password is: clay"<<endl;
						cout<<"Your Account Balance is 2000/-"<<endl;
						cout<<"______We will send your account book and Debit card to your Address with in 7 working days______"<<endl;
					}
					else if(choice3==2)
					{
						cout<<"please Pay minimum Account Balance to proceed (Recomended 500/-) (optional 2000/-)"<<endl;
					}
					
					}
				cout<<"                                    ********Thank you for choosing our Lovely Bank Serives********"<<endl;
				}
				else if(choice1==2)
				{
						cout<<endl;
				        cout<<endl;
					cout<<"                                ********Thank yout for visiting our bank********"<<endl;
				}
				

			break;
			
		case 2:
		    char name[10],chequebook[100],query1[100],query2[100],query3[100],query4[100],query5[100];
			int user,pin,choice4,choice5,choice6,choice7,choice8,choice9,choice10,debt,period,nbr,timer,receipt,aadhar,acc,amt,old,newp,cred,ant,time,debit;
			cout<<"Press '1' to open the link   www.lpu bank.com : ";
			cin>>user;
			if(user==1)
			{
				fobj<<"                           Existing Customer Details";
				fobj<<"name:";
			    cout<<"Enter Username"<<endl;
			    cin>>name;
			    fobj<<name<<endl;
			    fobj<<"Password:";
			    cout<<"Enter password"<<endl;
			    cin>>pin;
			    fobj<<pin<<endl;
			}
			cout<<"\n\n1.Home"<<endl;
			cout<<"\n\n Enter your Choice : ";
			cin>>choice4;
		    if(choice4==1)	
			{
			cout<<"1.accounts"<<endl;
			cout<<"2.Trasactions"<<endl;
			cout<<"3.Value Added Services"<<endl;
			cout<<"4.Privacy Security Settings"<<endl;
			cout<<"5.Credit cards"<<endl;
			cout<<"6.Message Centre"<<endl;
			cout<<endl;
			cout<<"Enter your choice : ";
			cin>>choice5;
			if(choice5==1)
				{
					cout<<"INQUIRE"<<endl;
					cout<<endl;
					cout<<"1.Accounts Summary"<<endl;
					cout<<"2.Operative Accounts"<<endl;
					cout<<"3.Deposite Accounts"<<endl;
					cout<<"4.Loan Accounts"<<endl;
					cout<<"5.PPF Accounts"<<endl;
					cout<<endl;
					cout<<"REQUEST"<<endl;
					cout<<endl;
					cout<<"6.Interest Certificate for loans"<<endl;
					cout<<"7.Provisional Certificate for Loans"<<endl;
					cout<<"8.Tax Deducted at source"<<endl;
					cout<<endl;
					cout<<"Enter your choice : ";
					cin>>choice8;
					if(choice8==1)
					{
						cout<<"your Account Balance is 2000/-"<<endl;
					}
					else if(choice8==2)
					{
						cout<<"Account number : 134545000023"<<endl;
						cout<<"Account name : Clay Janson"<<endl;
						cout<<"Account Bal : 2000/-"<<endl;
					}
					else if(choice8==3)
					{
						cout<<"You dont have any accounts linked for the given criteria"<<endl;
					}
					else if(choice8==4)
					{
						cout<<"You dont have any Loans accounts linked for the given criteria"<<endl;
					}
					else if(choice8==5)
					{
						cout<<"There are No records fetched"<<endl;
					}
					else if(choice8==6)
					{
						cout<<"You dont have any Loan accounts to take certificates"<<endl;
					}
					else if(choice8==7)
					{
						cout<<"Provisional Certificate will be generated for housing Loans and Education Loans(You dont have any Loan accounts)"<<endl;
					}
					else if(choice8==8)
					{
						cout<<"The tax deducted detilas do not exist currently. Try after sometime"<<endl;
					}
				}
				else if(choice5==2)
				{
					cout<<endl;
					cout<<"FUNDS TRANSFER"<<endl;
					cout<<"1.Own Accounts"<<endl;
					cout<<"2.Other Andhra Bank Accounts"<<endl;
					cout<<"3.Instant Transfer 24*7"<<endl;
					cout<<endl;
					cout<<"PAYMENTS"<<endl;
					cout<<"4.Pay to own PPF Account"<<endl;
					cout<<"5.Pay to other AndhraBank PPF Accounts"<<endl;
					cout<<endl;
					cout<<"BENIFICIARY MANAGEMENT"<<endl;
					cout<<"6.Add/view/Authorize/Active Payee"<<endl;
					cout<<endl;
					cout<<"TRANSACTION STATUS"<<endl;
					cout<<"7.All Transactions"<<endl;
					cout<<"8.Scheduled Transactions"<<endl;
					cout<<"9.Completed Transactions"<<endl;
					cout<<"10.Saved Transactions"<<endl;
					cout<<endl;
					cout<<"Enter your Choice : ";
					cin>>choice6;
					if(choice6==1)
					{
						cout<<"Dt-1-18 2000/-"<<endl;
						cout<<"Dt-10-18 200/-"<<endl;
						cout<<"Dt-15-18 1000/-"<<endl;
						cout<<"Dt-20-18 5000/-"<<endl;
						cout<<"Dt-25-18 2500/-"<<endl;
					}
					else if(choice6==2)
					{
						cout<<"You dont have any other Andhra BAnk Accounts"<<endl;
					}
					else if(choice6==3)
					{
						cout<<"There is no detilas currently Available"<<endl;
					}
					else if(choice6==4)
					{
						cout<<"Go through this link to pay instantly to any other Accounts"<<endl;
					}
					else if(choice6==5)
					{
						cout<<"Currently PPF option will be Not available to your account"<<endl;
					}
					else if(choice6==6)
					{
						cout<<"Currently PPF option will be Not available to your account"<<endl;
					}
					else if(choice6==7)
					{
						cout<<"You can add other payee to your account"<<endl;
					}
					else if(choice6==8)
					{
						cout<<"Dt-1-17 2000/-"<<endl;
						cout<<"Dt-10-17 200/-"<<endl;
						cout<<"Dt-12-17 1000/-"<<endl;
						cout<<"Dt-11-17 5000/-"<<endl;
						cout<<"Dt-12-17 2500/-"<<endl;
						cout<<"Dt-12-17 2000/-"<<endl;
						cout<<"Dt-1-18 200/-"<<endl;
						cout<<"Dt-1-18 1000/-"<<endl;
						cout<<"Dt-2-18 5000/-"<<endl;
						cout<<"Dt-3-18 2500/-"<<endl;
					}
					else if(choice6==9)
					{
						cout<<"Dt-12-17 1000/-"<<endl;
						cout<<"Dt-11-17 5000/-"<<endl;
						cout<<"Dt-12-17 2500/-"<<endl;
						cout<<"Dt-12-17 2000/-"<<endl;
						cout<<"Dt-1-18 200/-"<<endl;
					}
					else if(choice6==10)
					{
						cout<<"Dt-1-17 2000/-"<<endl;
						cout<<"Dt-10-17 200/-"<<endl;
						cout<<"Dt-12-17 1000/-"<<endl;
						cout<<"Dt-11-17 5000/-"<<endl;
						cout<<"Dt-12-17 2500/-"<<endl;
						cout<<"Dt-12-17 2000/-"<<endl;
						cout<<"Dt-1-18 200/-"<<endl;
						cout<<"Dt-1-18 1000/-"<<endl;
						cout<<"Dt-2-18 5000/-"<<endl;
					    cout<<"Dt-3-18 2500/-"<<endl;
					}	
				}
				else if(choice5==3)
				{
					cout<<endl;
					cout<<"Account Services"<<endl;
					cout<<"1.Open OD Account"<<endl;
					cout<<"2.Service Requests"<<endl;
					cout<<"3.Check Book enquiry"<<endl;
					cout<<endl;
					cout<<"Standing Instruction"<<endl;
					cout<<"4.ADD"<<endl;
					cout<<"5.Modify"<<endl;
					cout<<"6.Delete"<<endl;
					cout<<"7.inquire"<<endl;
					cout<<endl;
					cout<<"Government Schemes"<<endl;
					cout<<"8.Apply sovereign gold Bonds(SGB)"<<endl;
					cout<<"9.Generate Sovereign Gold Bonds Receipt"<<endl;
					cout<<"10.Pradhan Manthri Jeevan Jyothi Bheema yojana(PMJBY)"<<endl;
					cout<<"11.Aadhar Registration"<<endl;
					cout<<"12.Apply Atal Pension Yojana(APY)"<<endl;
					cout<<"13.Pradhan MAnthri Suraksha Bheem Yojana(PMSBY)"<<endl;
					cout<<endl;
					cout<<"ASBA"<<endl;
					cout<<"14.IPo/FPO/RI-Bid Price/Lots Details"<<endl;
					cout<<"15.Apply IPO/FPO/RI online"<<endl;
					cout<<"16.View IPO/FPO/RI Bid Status"<<endl;
					cout<<"17.Withdraw IPO/FPO/RI"<<endl;
					cout<<"Donations"<<endl;
					cout<<"18.Pay Donations"<<endl;
					cout<<endl;
					cout<<"Tax Realated Services";
					cout<<"19.Income Tax E-Filling"<<endl;
					cout<<"20.Income Tax Credits Statement"<<endl;
					cout<<"21.Tax Challan Registration"<<endl;
					cout<<endl;
					cout<<"Enter your Choice : ";
					cin>>choice7;
					if(choice7==1)
					{
						fobj<<"Debit Account number:";
						cout<<"Enter your Debit Account number"<<endl;
						cin>>debit;
						fobj<<debit<<endl;
						fobj<<"Selected period:";
						cout<<"Enter Period"<<endl;
						cin>>period;
						fobj<<period<<endl;
						fobj<<"Phone number:";
						cout<<"Enter your Phone number"<<endl;
						cin>>nbr;
						fobj<<nbr<<endl;
						fobj<<"Auto renewal Time:";
						cout<<" Enter Auto Renewel Time"<<endl;
						cin>>time;
						fobj<<time;
						cout<<endl;
						cout<<"Status : Using";
						cout<<"Your OD Account is succesfully opened"<<endl;
					}
					else if(choice7==2)
					{
						cout<<" About Deposit"<<endl;
						cin>>query1;
						cout<<"About operative Accounts"<<endl;
						cin>>query2;
						cout<<"Enter your Phone number"<<endl;
						cin>>query3;
						cout<<"About other Services"<<endl;
						cin>>query4;
						cout<<endl;
						cout<<"Your request is succesfully Registered. we will call you within working hours"<<endl;
					}
					else if(choice7==3)
					{
						fobj<<"Question:";
						cout<<"Enter your question"<<endl;
						cin>>chequebook;
						fobj<<chequebook<<endl;
						cout<<endl;
						cout<<"Your request is succesfully Registered. we will call you within working hours"<<endl;
					}
					else if(choice7==4)
					{
						fobj<<"New request:";
						cout<<"Enter your New request"<<endl;
						cin>>query5;
						fobj<<query5;
						cout<<endl;
						fobj<<"Registered";
						cout<<"Your request is succesfully Registered. we will call you with in working hours"<<endl;
					}
					else if(choice7==5)
					{
						cout<<"There are no record fetched"<<endl;
					}
					else if(choice7==6)
					{
						cout<<"There are no records fetched"<<endl;
					}
					else if(choice7==7)
					{
						cout<<"There are no qrecords fetched"<<endl;
					}
					else if(choice7==8)
					{
						cout<<"SGB will avilable according to guidelines given by RBI i.e, Monday,tuesday and Wednesday "<<endl;
					}
					else if(choice7==9)
					{
						fobj<<"Acc.No:";
						cout<<"Enter your Account num to genrate reciept"<<endl;
						cin>>receipt;
						fobj<<receipt;
						cout<<endl;
						cout<<"we sended a mail, Check your E-mail inbox to download the receipt "<<endl;
					}
					else if(choice7==10)
					{
						cout<<"Contact your Nearest branch to know the more datails about this"<<endl;
					}
					else if(choice7==11)
					{
						fobj<<"Adhar number:";
						cout<<"Enter your Aadhar card number : "<<endl;
						cin>>aadhar;
						fobj<<aadhar<<endl;
						cout<<endl;
						cout<<"Aadhar num is succesfully registered with your Account"<<endl;
					}
					else if(choice7==12)
					{
						cout<<"Please Contact your nearest Branch to know more details about this scheme"<<endl;
					}
					else if(choice7==13)
					{
						cout<<"Please Contact your nearest Branch to know more details about this scheme"<<endl;
					}
					else if(choice7==14)
					{
						cout<<"currently this details are not available to your Account"<<endl;
					}
					else if(choice7==15)
					{
						cout<<"Please Contact your nearest Branch to know more details about this scheme"<<endl;
					}
					else if(choice7==16)
					{
						cout<<"currently this details are not available to your Account"<<endl;
					}
					else if(choice7==17)
					{
						cout<<"Enter your Acc number : "<<endl;
						cin>>acc;
						cout<<endl;
						cout<<"we sended a mail, Check your E-mail inbox to download the receipt"<<endl;
					}
					else if(choice7==18)
					{
						cout<<"You can pay donations to any orphan age, old age homes. It is equal to paying income tax amounts."<<endl;
						cout<<"Please Contact your nearest Branch to know more details."<<endl;
					}
					else if(choice7==19)
					{
						cout<<"Please Contact your nearest Branch to know more details about this scheme"<<endl;
					}
					else if(choice7==20)
					{
						cout<<"Enter your Account number : "<<endl;
						cin>>acc;
						cout<<endl;
						cout<<"we sended a mail, Check your E-mail inbox to download the receipt"<<endl;
					}	
						else if(choice7==21)
					{
						cout<<"Enter your Account number : "<<endl;
						cin>>acc;
						cout<<"Enter Amount: "<<endl;
						cin>>amt;
						cout<<endl;
						cout<<"we sended a mail, Check your E-mail inbox to download the receipt"<<endl;
					}			
				
				}
				else if(choice5==4)
				{
					cout<<endl;
					cout<<"Safe-T"<<endl;
					cout<<"1.Registration safe-T"<<endl;
					cout<<"2.Activate safe-T"<<endl;
					cout<<"3.Deactivate Safe-T"<<endl;
					cout<<endl;
					cout<<"4.Password Management"<<endl;
					cout<<"5.Enable Trasaction Password"<<endl;
					cout<<"6.Disable Trasaction Password"<<endl;
					cout<<"7.Reset Transaction Paasword"<<endl;
					cout<<"8.Change Trasaction Paasword & User Id"<<endl;
					cout<<endl;
					cout<<"Enter your Choice : "<<endl;
					cin>>choice9;
					if(choice9==1)
					{
						cout<<"Enter your Account number : "<<endl;
						cin>>acc;
						cout<<"Enter Amount: "<<endl;
						cin>>amt;
						cout<<endl;
						cout<<"we sent you a mail, Check your E-mail inbox to download the receipt"<<endl;
					}
					else if(choice9==2)
					{
						cout<<"Safe-T services are Activated to your Account"<<endl;
					}
					else if(choice9==3)
					{
						cout<<"Safe-T services are de-activated to your Account"<<endl;
					}
					else if(choice9==4)
					{
						cout<<"Your password will be Expired within 200 Days from Present"<<endl;
					}
					else if(choice9==5)
					{
						cout<<"Transaction password is enabled to your Account"<<endl;
					}
					else if(choice9==6)
					{
						cout<<"Transaction password is disabled to your Account"<<endl;
					}
					else if(choice9==7)
					{
						fobj<<"Old password:";
						cout<<"Enter your Old Password (int) : "<<endl;
						cin>>old;
						fobj<<old;
						fobj<<"New password:";
						cout<<"Enter your new password (int) : "<<endl;
						cin>>newp;
						fobj<<newp;
						cout<<"Confirm your new password (int) : "<<endl;
						cin>>newp;
						cout<<endl;
						cout<<"your password is succesfully changed"<<endl;
					}
				}
				else if(choice5==5)
				{
					cout<<endl;
					cout<<"Credit Cards"<<endl;
					cout<<"1.Link or Add Credit Card"<<endl;
					cout<<"2.Pay to credit card"<<endl;
					cout<<endl;
					cout<<"Enter your Choice"<<endl;
					cin>>choice10;
					if(choice10==1)
					{
						cout<<"Enter your credit card number : "<<endl;
						cin>>cred;
						cout<<"Enter your CVV(turn your credit card you can see three numbers) : "<<endl;
						cin>>cred;
						cout<<endl;
						cout<<" Your credit card is succesfully Added"<<endl;
						
					}
					else if(choice10==2)
					{
						cout<<"Enter your credit card number : "<<endl;
						cin>>cred;
						cout<<"Enter your CVV (turn your credit card you can see three numbers) : "<<endl;
						cin>>cred;
						cout<<"Enter amount : "<<endl;
						cin>>ant;
						cout<<endl;
						cout<<" Your money is succesfully Added to your credit card"<<endl;
					}
				}
				else if(choice5==6)
				{
					cout<<"There are No messages To display in Selected"<<endl;
					fobj<<endl;
					fobj<<endl;
					fobj<<endl;
					fobj<<endl;
				}
			}
			
			
			break;
	}
	fobj.close();
	return 0;
}

