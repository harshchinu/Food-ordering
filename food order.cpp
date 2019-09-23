#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
using namespace std;

void ccolor(int clr){
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, clr);

//the above code displays colorful background. if you want colorful then you can remove the above comment but not the code, only comment//
}
void pwellcome(){
	ccolor(26);

	char welcome[50]="WELCOME";
	char welcome2[50]=" TO";
	char welcome3[50]=" FOOD ORDERING";
	char welcome4[50]=" MANAGEMENT SYSTEM";
	printf("\n\n\n\n\n\t\t\t");
	for(int wlc=0; wlc<strlen(welcome);wlc++){
		printf(" %c",welcome[wlc]);
		Sleep(100);
	}
	ccolor(26);
	printf("\n\n\t\t\t\t ");
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){

		printf(" %c",welcome2[wlc2]);
		Sleep(100);
	}
	ccolor(26);
	printf("\n\n\n\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){

			printf(" %c",welcome3[wlc3]);
		}
		else{

			printf(" %c",welcome3[wlc3]);
		}

		Sleep(100);
	}
	ccolor(26);
	printf("\n\n\n\t\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome4) ;wlc3++){
		if(welcome4[wlc3]!='A' && welcome4[wlc3]!='E'){

			printf(" %c",welcome4[wlc3]);
		}
		else{

			printf(" %c",welcome4[wlc3]);
		}
		Sleep(100);
	}
	ccolor(26);

}


void cls(){
	system("cls");
}

void loadingbar(void){
	for (int i=15;i<=100;i+=5){
		cls();
		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("%d %% Loading...\n\n\t\t",i);

		printf("");

		for (int j=0; j<i;j+=2){
			ccolor(160+j);
			printf(" ");
			ccolor(26);
		}
		Sleep(100);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(100);
		}
	}
}

class menuone
{
public:
	void menu1();
};

void menuone::menu1(){
    cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO FOOD ORDERING SYSTEM =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Veg Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spicy_Sizzler (Rs.350)\t\t\t\t[6] Eggy Pizza (Rs.400)\n\t[7] Cold-drink (Rs.100)\t\t\t\t[8] Double-Cheese-Pizza (Rs.540)\t\t\t[9] Hot_dog (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Hot-browney (Rs.335)\t\t\t[14] Desi.. (Rs.324)\t\t\t\t\t[15] S.Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
}

class menutwo:public menuone{
	protected:
        int  item,ch,p,s=0;
        string y,ye;
     public:
    void menu2(){
        ofstream write;
        write.open("order.text");
        if(!write)
        {
            cout<<"file can not open"<<endl;
            exit (-1);
        }
        enterorder:
             cout<<"\n\n\tENTER YOUR ORDER (one order at a time): ";
              cin>>ch;


          cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR CHOICE(y / n) :";

          cin>>ye;

          if(ye=="y"|| ye=="Y")
          {
            goto enterorder;
          }
          else
          {
           switch(ch)
           {
            case 1:
                    cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
                cin>>item;

                p=480;
                s=s+p*item;
                write<<"YOU ORDER  Veggie Supreme : 480";
                write<<" \n";
                write<<"NUMBER OF PIZZA IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 2:
                cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
                cin>>item;

                   p=440;
                s=s+p*item;
                write<<"YOU ORDER  Exotica : 440";
                write<<" \n";
                    write<<"NUMBER OF PIZZA IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 3:
                cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
                cin>>item;

                p=580;
                s=s+p*item;
                    write<<"YOU ORDER  Chicken Sizzler : 580";
                    write<<" \n";
                    write<<"NUMBER OF Chicken Sizzler IS : "<<item;
                    write<<"\n";
            cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 4:
                cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
                cin>>item;

                p=520;
                s=s+p*item;
                write<<"YOU ORDER  Chrispy Chicken : 520";
                write<<" \n";
                write<<"NUMBER OF Chrispy Chicken IS : "<<item;
                write<<"\n";
               cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 5:
                cout<<"\n\n\tHOW MANY Spicy_Sizzler YOU WANT:";
                cin>>item;

                p=350;
                s=s+p*item;
                write<<"YOU ORDER  Spicy_Sizzler : 350";
                write<<" \n";
                write<<"NUMBER OF Spicy_Sizzler IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER  Spicy_Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 6:
                cout<<"\n\n\tHOW MANY Eggy PIZZA YOU WANT:";
                cin>>item;

                p=400;
                s=s+p*item;
                write<<"YOU ORDER Eggy Pizza : 400";
                write<<"\n ";
                write<<"NUMBER OF PIZZA IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER Eggy Pizza "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 7:
                cout<<"\n\n\tHOW MANY Cold_Drink YOU WANT:";
                cin>>item;

                p=100;
                s=s+p*item;
                write<<"YOU ORDER Cold_Drink : 420";
                write<<"\n ";
                write<<"NUMBER OF Cold_Drink IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER  Cold_Drink "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 8:
                cout<<"\n\n\tHOW MANY Double_Chesse_PIZZA YOU WANT :";
                cin>>item;

                p=540;
                s=s+p*item;
                write<<"YOU ORDER Double Cheese : 540";
                write<<" \n";
                write<<"NUMBER OF PIZZA IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 9:
            cout<<"\n\n\tHOW MANY Hot_Dog YOU WANT :";
                cin>>item;

                p=548;
                s=s+p*item;
                write<<"YOU ORDER Hot_Dog : 548";
                write<<" \n";
                    write<<"NUMBER OF Hot_Dog IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER Hot_Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 10:
                cout<<"\n\n\tHOW MANY HAM BURGER YOU WANT :";
                cin>>item;

                p=390;
                s=s+p*item;
                write<<"YOU ORDER Ham Burger : 390";
                write<<" \n";
                    write<<"NUMBER OF Ham Burger IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER Ham Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 11:
                    cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
                cin>>item;

                p=525;
                s=s+p*item;
                write<<"YOU ORDER Margherita : 525";
                write<<" \n";
                write<<"NUMBER OF PIZZA IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 12:
                cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
                cin>>item;

                p=425;
                s=s+p*item;
                write<<"YOU ORDER Fish 'n' Chips : 425";
                write<<" \n";
                write<<"NUMBER OF Fish 'n' Chips IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 13:
                cout<<"\n\n\tHOW MANY Hot_browney YOU WANT :";
                cin>>item;

                p=335;
                s=s+p*item;
                write<<"YOU ORDER  Hot_browney  : 335";
                write<<" \n";
                write<<"NUMBER OF Hot_browney IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER Hot_browney "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 14:
                cout<<"\n\n\tHOW MANY Desi.. YOU WANT :";
                cin>>item;

                p=324;
                s=s+p*item;
                write<<"YOU ORDER Desi.. : 324";
                write<<" \n";
                write<<"NUMBER OF Desi.. IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER  Desi.. "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 15:
                cout<<"\n\n\tHOW MANY S.HOT DOG YOU WANT :";
                cin>>item;

                p=360;
                s=s+p*item; //fn1353
                write<<"YOU ORDER  S.Hot Dog : 360";
                write<<"\n ";
                    write<<"NUMBER OF S.Hot Dog IS : "<<item;
                write<<"\n";
            cout<<"\n\n\n\tYOU ORDER  S.Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
            break;

            case 16:
                cout<<"\n\t\t\t\t\t Thank you.....\n\t\t\t\t\tCome Again!!!";
                exit(0);
            break;

            default:
                cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
                goto enterorder;
                break;
           }
           if(ch!=16){
           cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
           cin>>y;
           if(y=="yes"|| y=="YES")
           {
            goto enterorder;
           }
           else
           {
            cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
            for(int a=1;a<8;a++) //
            {
                Sleep(500);
                cout << "...";
            }
            cout<<"\n\t\t\t\t\t\t\t";
            system("PAUSE");
           }
        }
        cls();
        cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
        cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
        cout << "\t\t\t\t\t\t\t ================================================"<<endl;
        cout << endl;
        cout << endl;

        cout << "\t\t\t\t\t\t\t  Bill No : ABCD           Order : XYZ123"<<endl;
        cout << endl;
        cout << endl;
        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
        write<<"\t\t\t\t\t\t\t ";
        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
        cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;


        write.close();
        }
}
  void show1()
  {
  	menu1();
  	menu2();
  }

};
class three:public menuone,public menutwo
{
	public:
		void total()
      {
      		long userId;
			wrid:
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t---------------------";
			cout<<"\n\t\t\t\t\tEnter Login Id = ";
			cin>>userId;
			cout<<"\t\t\t\t\t---------------------";
			if(userId!=1804231070)
			{
				cout<<"\nDon't try to be smart.....Enter correct id\n";
				goto wrid;
			}
			else
			cout<<"\n\n\n\t\t\t\t\tHello MR. CO,\n";
			psw:
			string pwd="co_oep";  //password
			string pass="";  //empty string
			char c;
				cout<<"\n\n\n\t\t\t\t\tPassword = ";
				p:
				c=getch();
				cout<<"*";   //for printing * instead for password
				if(c!=13)
				{
					pass=pass+c;  //for concatenating the string
					goto p;
				}

      			{
      			if(pass==pwd)
      			{
      				cout<<"\n\n\t\t\t\t\t\t\tAccess Granted. Welcome to Our System\n\n\n";
      				system("PAUSE");
      				cls();
      				show1();
				}
				else
				{
				cout<<"\nWrong Password\n";
				goto psw;
				}
			}
		}
};
int main()
{
   system("title FOOD ORDERING SYSTEM");
	system("mode con: cols=88 lines=30");

	loadingbar();

	cls();
	pwellcome();
	cls();
   three ob;
   ob.total();
   getch();
   return 0;
}
