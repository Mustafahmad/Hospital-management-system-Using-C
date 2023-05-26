#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct input{       //Structure
	string firstname,lastname,gender,address,blood,mobile;
	int age;
	int bill=0,boperation=6000,bcheckup=2000,bcritical=1500,bappointment=3000,bmedicine=1000,broom=1500,baddmission=2000;
	
};
void data(input);    //FUNCTION prototype
int main()
{
	system("cls");
	int disease,appointment,checkup,option,badvance,discount;
	input i;     //object
	
   	cout<<"\n\t***************************************************************\t                    >>>>>>>                       ";
	cout<<"\t*                     Welcome                                 *\t                 <<         >>>                   ";
	cout<<"\t*               LRAM HOSPITAL.Lahore                          *\t               >>      ||     >>                  ";
	cout<<"\t* 6 km from Raiwind Road near Nadia catering                  *\t              >>       ||                         ";
	cout<<"\t* Email:Lram@gmail.com              Contact No: 04236568879   *\t             >>        ||                         ";
	cout<<"\t*                     www.Lram.org                            *\t             >>       LRAM                        ";
	cout<<"\t*    we are providing the best facility in the town.          *\t             >> HOSPITAL LAHORE                   ";
	cout<<"\t***************************************************************\t             >>        ||                         ";
	cout<<"\t                                                               \t              >>       ||                         ";
	cout<<"\t                                                               \t               >>      ||      >>                 ";
	cout<<"\t                                                               \t                  >>         >>>                   ";
	cout<<"\t                                                               \t                     >>>>>>>                      "<<endl;
	cout<<endl; 

    cout<<"\n************************************"; 
    cout<<"\nSelect an option to continue."<<endl;
	cout<<"\n1.Check Rate list.";
	cout<<"\n2.Check our services.";
	cout<<"\n3.Enter data in a hospital record.";
	cout<<"\n4.Exit."<<endl;
	cout<<"\n*************************************"<<endl;
	cin>>option;
	
	switch(option)
	{
	case 0 :
    cout<<"Not valid Option.";
    break;
    
	case 1 :
		system("cls");
	cout<<"\n\tRates of the services we provide."<<endl;
	cout<<"\n******************************************";
	cout<<"\n1.Appointment with Doctor will cost 3000."<<endl;
	cout<<"\n2.Operation will cost 6000."<<endl;
	cout<<"\n3.Regular checkup will cost 2000."<<endl;
	cout<<"\n4.Room charges will be 1500."<<endl;
	cout<<"\n5.Medicine will cost 1000."<<endl;
	cout<<"\n6.Checkup in emergency will cost 1500."<<endl;
	cout<<"\n****************************************** \n";
	system("pause");
	main();
	break;
	
	case 2 :
		system("cls");
	cout<<"\n\tWe are providing the following facilities in our hospital."<<endl;
	cout<<"\n********************************"<<endl;
	cout<<"1. Heart Disease."<<endl;       
    cout<<"2. Liver Disease."<<endl;
    cout<<"3. Stomach Disease."<<endl;
    cout<<"4. General Checkup."<<endl;
    cout<<"5. Dental Disease."<<endl;
    cout<<"\n******************************** \n";
    system("pause");
    main();
    break ;
    
    case 4 :
    cout<<"Thank you."<<endl;
    break;
    
	case 3 :
		system("cls");
	cout<<"\n\t\t\t********************************"<<endl;	
	cout<<"\t\t\t*Please enter data for patient*\n";
	cout<<"\t\t\t\tFirst name   : ";                    //Data collection from user.
	cin>>i.firstname; 
    cout <<"\t\t\t\tLast name     : ";         
    cin>>i.lastname;
    cout<<"\t\t\t\tGender(m/f)    : ";         
    cin>>i.gender;
	cout<<"\t\t\t\tAge            : ";         
	cin>>i.age;
	cout<<"\t\t\t\tBlood Group    : ";         
	cin>>i.blood;
	cout<<"\t\t\t\tHouse Address  : ";         
	cin>>i.address;
	cout<<"\t\t\t\tMobile number  : ";         
	cin>>i.mobile;
	cout<<"\n\t\t\t**********************************"<<endl;
	
	
	cout<<"choose the number according to the issue faced by the patient"<<endl;  //Disease 
	cout<<"\n********************************"<<endl;
	cout<<"1. Heart Disease."<<endl;       
    cout<<"2. Liver Disease."<<endl;
    cout<<"3. Stomach Disease."<<endl;
    cout<<"4. General Checkup."<<endl;
    cout<<"5. Dental Disease."<<endl;
    cout<<"\n********************************"<<endl;
    cin>>disease;
	
	switch (disease)                     //Appointing Doctor
	{
    case 0 :
    cout<<"Sorry we can not help you with that option";
    break;
    
	case 1 :  //heart case
    cout<<"\nFor heart disease, Book appointment with Dr.Sohail Arshad";
    cout<<"\nFor appointment press 1 = ";
    cin>>appointment;
    
   
	if (appointment==1)  //appointment fixation
	{
	cout<<"\nYour appointment has been fixed with Dr.Sohail Arshad at 9 o'clock Monday"<<endl;
    i.bill+=i.bappointment;
    cout<<"\n****************"<<endl;
	cout<<"1. Critical."<<endl;       
    cout<<"2. Routein Checkup."<<endl;
    cout<<"3. Operation."<<endl;
    cout<<"\n****************"<<endl;
    cin>>checkup;
        switch(checkup)
   {
	case 0:       //checkup details
    cout<<"You have selected wrong option";
    break;
    
    case 1:   //Critical
    cout<<"Doctor Rimsha assigned to the patient."<<endl;
    cout<<"Complete checkup"<<endl;
    cout<<"Medicaton 1. X 2. Y 3. Z";
    i.bill+=i.bcritical;
    i.bill+=i.bmedicine;
    data(i);    //function calling
    break;
    
    case 2:   //Routein Checkup
    cout<<"Medication 1. X  2. Y  3.Z";
    i.bill+=i.bmedicine;
    data(i);    //function calling
    break;
    
    case 3:   //Operation
    cout<<"Operation ward"<<endl;    
    cout<<"Operation in progress\a\a\a"<<endl;    
    cout<<"Operation completed"<<endl;
    i.bill+=i.boperation;
    cout<<"Discharge after 2 days "<<endl;
    i.bill+=2*i.broom;
    cout<<"Medication 1.X   2.Y   3.Z"<<endl;	
    i.bill+=i.bmedicine;
    data(i);   //function calling
	}
	}
	else
	{
		cout<<"\nYou have not booked any appointment";
	}
	break;


	case 2 :   //liver case
	cout<<"\nFor Liver disease, Book appointment with Dr.Asifa Nazeer";
    cout<<"\nFor appointment press 1 = ";
    cin>>appointment;
   
	if (appointment==1)
	{
	cout<<"\nYour appointment has been fixed with Dr.Asifa Nazeer at 9 o'clock Monday"<<endl;
    i.bill+=i.bappointment;
    cout<<"\n****************"<<endl;
	cout<<"1. Critical."<<endl;       
    cout<<"2. Routein Checkup."<<endl;
    cout<<"3. Operation."<<endl;
    cout<<"\n****************"<<endl;
    cin>>checkup;
        switch(checkup)
   {
	case 0:       //checkup 
    cout<<"You have selected wrong option";
    break;
    
    case 1:     //critical
    cout<<"Doctor Saima assigned to the patient."<<endl;
    cout<<"Complete checkup"<<endl;
    cout<<"Medicaton 1. X 2. Y 3. Z";
    i.bill+=i.bcritical;
    i.bill+=i.bmedicine;
    data(i);        //function calling
    break;
    
    case 2:     //Routein Checkup
    cout<<"Medication 1. X  2. Y  3.Z";
    i.bill+=i.bmedicine;
    data(i);
    break;
    
    case 3:      //operation
    cout<<"Operation ward"<<endl;   
    cout<<"Operation in progress\a\a\a"<<endl;    
    cout<<"Operation completed"<<endl;
    i.bill+=i.boperation;
    cout<<"Discharge after 2 days "<<endl;
    i.bill+=2*i.broom;
    cout<<"Medication 1.X   2.Y   3.Z"<<endl;	
    i.bill+=i.bmedicine;
    data(i);           //function calling
	}
	}
	else
	{
		cout<<"\nYou have not booked any appointment";
	}
	break;


	case 3 :   //Stomach disease
    cout<<"\nFor stomach disease, Book appointment with Dr.Amir Majeed";
    cout<<"\nFor appointment press 1 = ";
    cin>>appointment;
   
	if (appointment==1)
	{
	cout<<"\nYour appointment has been fixed with Dr.Rameez at 9 o'clock Monday"<<endl;
    i.bill+=i.bappointment;
    cout<<"\n*****************"<<endl;
	cout<<"1. Critical."<<endl;       
    cout<<"2. Routein Checkup."<<endl;
    cout<<"3. Operation."<<endl;
    cin>>checkup;
    cout<<"\n******************"<<endl;
        switch(checkup)
   {
	case 0:       //checkup 
    cout<<"You have selected wrong option";
    break;
    
    case 1:  //Critical
    cout<<"Doctor Ayesha assigned to the patient."<<endl;
    cout<<"Complete checkup"<<endl;
    cout<<"Medicaton 1. X 2. Y 3. Z";
    i.bill+=i.bcritical;
    i.bill+=i.bmedicine;
    data(i);   //function calling
    break;
    
    case 2:   //Routein Checkup
    cout<<"Medication 1. X  2. Y  3.Z";
    i.bill+=i.bmedicine;
    data(i);    //function calling
    break;
    
    case 3: //operation 
    cout<<"Operation ward"<<endl;    
    cout<<"Operation in progress\a\a\a\a"<<endl;    
    cout<<"Operation completed"<<endl;
    i.bill+=i.boperation;
    cout<<"Discharge after 2 days "<<endl;
    i.bill+=2*i.broom;
    cout<<"Medication 1.X   2.Y   3.Z"<<endl;	
    i.bill+=i.bmedicine;
    data(i);    //function calling
	}
	}
	else
	{
		cout<<"\nYou have not booked any appointment";
	}
	break;
		
	case 4 :     //General Checkup
	 cout<<"\nFor General checkup, Book appointment with Dr.Salman Iqbal";
    cout<<"\nFor appointment press 1 = ";
    cin>>appointment;
	if (appointment==1)
	{
	cout<<"\nYour appointment has been fixed with Dr.Salman Iqbal at 9 o'clock Monday"<<endl;
	i.bill+=i.bappointment;
	cout<<"After Checkup"<<endl;
	cout<<"Medication 1, X 2. Y 3. Z"<<endl;
	i.bill+=i.bmedicine;
	data(i);   //function calling

}
	
	else
	{
		cout<<"\nYou have not booked any appointment";
	}
 break ;
	 
	case 5:  //Dental disease
	 cout<<"\nFor Dental disease, Book appointment with Dr.Sania Akram";
    cout<<"\nFor appointment press 1 = ";
    cin>>appointment;
    
	if (appointment==1)
	{
	cout<<"\nYour appointment has been fixed with Dr.Sania Akram at 9 o'clock Monday"<<endl;
    i.bill+=i.bappointment;
    cout<<"\n****************"<<endl;
	cout<<"1. Critical."<<endl;       
    cout<<"2. Routein Checkup."<<endl;
    cout<<"3. Operation."<<endl;
    cin>>checkup;
    cout<<"\n****************"<<endl;
        switch(checkup)
   {
	case 0:       //checkup 
    cout<<"You have selected wrong option";
    break;
    
    case 1:      //critical
    cout<<"Doctor Shazia assigned to the patient."<<endl;
    cout<<"Complete checkup"<<endl;
    cout<<"Medicaton 1. X 2. Y 3. Z";
    i.bill+=i.bcritical;
    i.bill+=i.bmedicine;
    data(i);    //function calling
    break;
    
    case 2:      //Regualar checkup
    cout<<"Medication 1. X  2. Y  3.Z";
    i.bill+=i.bmedicine;
    data(i);
    break;
    
    case 3:    //operation
    cout<<"Operation ward"<<endl;   
    cout<<"Operation in progress\a\a\a\a"<<endl;    
    cout<<"Operation completed"<<endl;
    i.bill+=i.boperation;
    cout<<"Discharge after 2 days "<<endl;
    i.bill+=2*i.broom;
    cout<<"Medication 1.X   2.Y   3.Z"<<endl;	
    i.bill+=i.bmedicine;
    data(i);
	}
	}
	else
	{
		cout<<"\nYou have not booked any appointment";
	}
	break;
}
break;
}
    
return 0;
}
void data(input i){     //Defination of Function
	
	cout<<"\n********************************";
	cout<<"\n\Discharge slip  :" <<endl     ;
	cout<<"\n\tName of patient : "<<i.firstname + i.lastname;	
	cout<<"\t\tGender : "   <<i.gender;
	cout<<"\t\t\tAge : "      <<i.age<<endl;
	cout<<"\tBlood Group : "    <<i.blood;
	cout<<"\t\tHouse address : "  <<i.address;
	cout<<"\t\tMobile Number : "   <<i.mobile<<endl;
	cout<<"\n\tTotal bill   :"      <<i.bill;
	cout<<"\n\n******************************"; 
}

