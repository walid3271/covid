#include<bits/stdc++.h>
using namespace std;

struct COVID
{
    //admin//
    char h_n[50];//hospital_name
    char d_n[50];//doctor_name
    char l_n[50];//location_name
    unsigned long long int num;
    char p_d[50];
    char m_n[50];

    //user//
    char p_u_n[50];
    char p_u_m[50];
    unsigned long long int pon;

};


///############### admine panel (begin) #################///

///hospital (begin)///

hospital_add()//add
{
    struct COVID h;
    FILE *hptl;
    hptl=fopen("hospital.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "how many Hospital name you want to input? "<<endl;
        cin>>nn;
        cout<< "input hospital name."<<endl;
        for(int i=0; i<nn; i++)
        {
            cin>>h.h_n;
            fprintf(hptl, "%s\n",h.h_n);
        }
    }
    fclose(hptl);
}

hospital_show()//show
{
    struct COVID h;
    FILE *hptl;
    hptl=fopen("hospital.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "hospital name."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",h.h_n);
            cout<<h.h_n<<endl;
        }
    }
    fclose(hptl);
}

hospital_delete()//delete
{
    FILE *hptl;
    hptl=fopen("hospital.txt","w");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "hospital delete."<<endl;
    }
    fclose(hptl);
}


hospital()
{
    cout<< "1 Add Hospital."<<endl;
    cout<< "2 Show Hospital."<<endl;
    cout<< "3 delete Hospital."<<endl;
    cout<< "choose your option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        hospital_add();
        break;
    case 2:
        hospital_show();
        break;
    case 3:
        hospital_delete();
        break;
    }

}
///hospital (endl) ///


///doctors (bigen)///

doctors_add()//add
{
    struct COVID d;
    FILE *hptl;
    hptl=fopen("doctor.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "how many doctors name you want to input? "<<endl;
        cin>>nn;
        cout<< "input doctors name."<<endl;
        for(int i=0; i<nn; i++)
        {
            cin>>d.d_n;
            fprintf(hptl, "%s\n",d.d_n);
        }
    }
    fclose(hptl);
}

doctors_show()//show
{
    struct COVID d;
    FILE *hptl;
    hptl=fopen("doctor.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "doctors name."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",d.d_n);
            cout<<d.d_n<<endl;
        }
    }
    fclose(hptl);
}

doctors_delete()//delete
{
    FILE *hptl;
    hptl=fopen("doctor.txt","w");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "doctors delete."<<endl;
    }
    fclose(hptl);
}


doctors()
{
    cout<< "1 Add doctors."<<endl;
    cout<< "2 Show doctors."<<endl;
    cout<< "3 delete doctors."<<endl;
    cout<< "choose your option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        doctors_add();
        break;
    case 2:
        doctors_show();
        break;
    case 3:
        doctors_delete();
        break;
    }
}
///doctors (end) ///


///test location (bigen)///

location_add()//add
{
    struct COVID l;
    FILE *hptl;
    hptl=fopen("location.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "how many location name you want to input? "<<endl;
        cin>>nn;
        cout<< "input location."<<endl;
        for(int i=0; i<nn; i++)
        {
            cin>>l.l_n;
            fprintf(hptl, "%s\n",l.l_n);
        }
    }
    fclose(hptl);
}

location_show()//show
{
    struct COVID l;
    FILE *hptl;
    hptl=fopen("location.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "location name."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",l.l_n);
            cout<<l.l_n<<endl;
        }
    }
    fclose(hptl);
}
location_delete()//delete
{
    FILE *hptl;
    hptl=fopen("location.txt","w");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "location delete."<<endl;
    }
    fclose(hptl);
}
covid_test_location()
{
    cout<< "1 Add location."<<endl;
    cout<< "2 Show location."<<endl;
    cout<< "3 delete location."<<endl;
    cout<< "choose your option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        location_add();
        break;
    case 2:
        location_show();
        break;
    case 3:
        location_delete();
        break;
    }
}
///test location (end) ///

///hot line number (begin) ///

number_add()//add
{
    struct COVID numb;
    FILE *hptl;
    hptl=fopen("number.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "how many number you want to input? "<<endl;
        cin>>nn;
        cout<< "input number."<<endl;
        for(int i=0; i<nn; i++)
        {
            cin>>numb.num;
            fprintf(hptl, "%llu\n",numb.num);
        }
    }
    fclose(hptl);
}
number_show()//show
{
    struct COVID numb;
    FILE *hptl;
    char c[50];
    hptl=fopen("number.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "number."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%llu\n",&numb.num);
            cout<<numb.num<<endl;
        }
    }
    fclose(hptl);
}
number_delete()//delete
{
    FILE *hptl;
    hptl=fopen("location.txt","w");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "location delete."<<endl;
    }
    fclose(hptl);
}

hot_line_number()
{
    cout<< "1 Add number."<<endl;
    cout<< "2 Show number."<<endl;
    cout<< "3 delete number."<<endl;
    cout<< "choose your option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        number_add();
        break;
    case 2:
        number_show();
        break;
    case 3:
        number_delete();
        break;
    }
}
///hot line number (end) ///

///prevent covid & first aid (bigen) ///

first_aid_info_add()//add
{
    struct COVID pre;
    FILE *hptl;
    hptl=fopen("first_aid.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "how many lines you want to input? "<<endl;
        cin>>nn;
        cout<< "input first aid info and prevent policy."<<endl;
        for(int i=0; i<nn; i++)
        {
            cin>>pre.p_d;
            fprintf(hptl, "%s\n",pre.p_d);
        }
    }
    fclose(hptl);
}
first_aid_info_show()//show
{
    struct COVID pre;
    FILE *hptl;
    hptl=fopen("first_aid.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "first aid info and prevent policy."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",pre.p_d);
            cout<<pre.p_d<<endl;
        }
    }
    fclose(hptl);
}
first_aid_info_delete()//delete
{
    FILE *hptl;
    hptl=fopen("first_aid.txt","w");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "first aid and prevent policy info delete."<<endl;
    }
    fclose(hptl);
}
prevent_covid_first_aid()
{
    cout<< "1 Add first aid info."<<endl;
    cout<< "2 Show first aid info."<<endl;
    cout<< "3 delete first aid info."<<endl;
    cout<< "choose your option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        first_aid_info_add();
        break;
    case 2:
        first_aid_info_show();
        break;
    case 3:
        first_aid_info_delete();
        break;
    }
}
///prevent covid & first aid (end) ///

///Buy medicine (bigen)///

medicine_add()//add
{
    struct COVID med;
    FILE *hptl;
    int m;
    hptl=fopen("medicine.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "how many medicine you want to input? "<<endl;
        cin>>nn;
        cout<< "input medicine."<<endl;
        for(int i=0; i<nn; i++)
        {
            cin>>m>>med.m_n;
            fprintf(hptl, "%d %s\n",m,med.m_n);
        }
    }
    fclose(hptl);
}
medicine_show()//show
{
    struct COVID med;
    FILE *hptl;
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "medicine."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",med.m_n);
            cout<<med.m_n<<endl;
        }
    }
    fclose(hptl);
}
medicine_delete()//delete
{
    FILE *hptl;
    hptl=fopen("medicine.txt","w");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "medicine info delete."<<endl;
    }
    fclose(hptl);
}

Online_payment_method_for_user()
{
    FILE *hptl;
    int m;
    char p_m[50];
    hptl=fopen("payment option.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "How many payment methods do you want to add?"<<endl;
        cin>>nn;
        cout<< "Input payment methods."<<endl;
        for(int i=0; i<nn; i++)
        {
            cin>>m;
            gets(p_m);
            fprintf(hptl,"%d %s\n",m,p_m);
        }
    }
    fclose(hptl);
}

buy_medicine()
{
    cout<< "1 Add medicine."<<endl;
    cout<< "2 Show medicine."<<endl;
    cout<< "3 delete medicine."<<endl;
    cout<< "4 Online payment method for user."<<endl;
    cout<< "choose your option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        medicine_add();
        break;
    case 2:
        medicine_show();
        break;
    case 3:
        medicine_delete();
        break;
    case 4:
        Online_payment_method_for_user();
        break;
    }
}
///Buy medicine (end)///


Home()
{
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #           Home page           #"<<endl;
    cout<< "                                        #################################"<<endl;

    cout<< "1 hospital"<<endl;
    cout<< "2 doctors"<<endl;
    cout<< "3 covid test location"<<endl;
    cout<< "4 hot line number"<<endl;
    cout<< "5 prevent covid & first aid"<<endl;
    cout<< "6 Buy medicine"<<endl;

    int a;
    cout<< "choose your option : ";
    cin>>a;
    switch(a)
    {
    case 1:
        hospital();
        break;

    case 2:
        doctors();
        break;
    case 3:
        covid_test_location();
        break;
    case 4:
        hot_line_number();
        break;
    case 5:
        prevent_covid_first_aid();
        break;
    case 6:
        buy_medicine();
        break;

    }
}


admin_panel_login()//admin login
{
    cout<< "                                                                         "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #           for login           #"<<endl;
    cout<< "                                        #################################"<<endl;
    FILE *hptl;
    char name[50],name_user[50];
    int pass_user,pass;
    hptl=fopen("registration.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(1)
        {
            cout<< "                                        ----------------------------------"<<endl;
            cout<< "                                        user name : ";
            getchar();
            gets(name_user);

            cout<< "                                        password : ";
            cin>>pass_user;

            fscanf(hptl,"%s%d",&name,&pass);
            bool result=strcmp(name,name_user);
            if(result==0 && pass==pass_user)
            {
                Home();
                break;
            }
            else
                cout<<endl<< "                                        Oops! (wrong user name or password)"<<endl;
            cout<< "                                        ----------------------------------"<<endl;
        }
    }
    fclose(hptl);
}




admin_panel_registration()//admine registration
{
    cout<< "                                                                         "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #        for registration       #"<<endl;
    cout<< "                                        #################################"<<endl;
    FILE *hptl;
    char name[50],mail[50];
    int pass;
    hptl=fopen("registration.txt","w");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        --------------------------------"<<endl;
        cout<< "                                        user name :";
        getchar();
        gets(name);
        cout<< "                                        email :";
        gets(mail);
        cout<< "                                        password :";
        cin>>pass;
        cout<< "                                        --------------------------------"<<endl;
        fprintf(hptl,"%s\n%d\n",name,pass);
    }
    fclose(hptl);
    admin_panel_login();
}

admin_panel()
{
    cout<< "                                                                          "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #     welcome to admine panel   #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 admine panel registration.  |"<<endl;
    cout<< "                                        | 2 admine panel login.         |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
    int n;
    cin>>n;
    if(n==1)
        admin_panel_registration();
    else if(n==2)
        admin_panel_login();
}


///############### admin panel (end) #################///


///############### user panel (begin) #################///
hospital_user()
{
    struct COVID h;
    FILE *hptl;
    hptl=fopen("hospital.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "hospital name."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",h.h_n);
            cout<<h.h_n<<endl;
        }
    }
    fclose(hptl);
}
doctors_user()
{
    struct COVID d;
    FILE *hptl;
    hptl=fopen("doctor.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "doctors name."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",d.d_n);
            cout<<d.d_n<<endl;
        }
    }
    fclose(hptl);
}
covid_test_location_user()
{
    struct COVID l;
    FILE *hptl;
    hptl=fopen("location.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "location name."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",l.l_n);
            cout<<l.l_n<<endl;
        }
    }
    fclose(hptl);
}
hot_line_number_user()
{
    struct COVID numb;
    FILE *hptl;
    char c[50];
    hptl=fopen("number.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "number."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%llu\n",&numb.num);
            cout<<numb.num<<endl;
        }
    }
    fclose(hptl);
}
prevent_covid_first_aid_user()
{
    struct COVID pre;
    FILE *hptl;
    hptl=fopen("first_aid.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "first aid info and prevent policy."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",pre.p_d);
            cout<<pre.p_d<<endl;
        }
    }
    fclose(hptl);
}


payment2()
{
    FILE *hptl;
    int m[100],i=0,j=0;
    char s[50];
    hptl=fopen("payment option.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    cout<< "Enter your choice : ";
    int x;
    cin>>x;
    while(1)
    {
        fscanf(hptl, "%d",&m[j]);
        fscanf(hptl, "%s",&s);
        if(m[j]==x)
        {
            cout<<m[j]<<" "<<s<<endl;

            FILE *hptl;
            hptl=fopen("address.txt","a+");
            if(hptl==NULL)
                cout<< "File does not exist."<<endl;
            else
            {
                fprintf(hptl,"Bank : %s\n",s);
                cout<< "Bank number : ";
                unsigned long long int t;
                cin>>t;
                fprintf(hptl,"Bank number : %llu\n",t);
                fprintf(hptl,"----------------------");
                break;
            }
        }
        j++;
    }
}





payment()
{
    cout<< "1 Cash on delivery"<<endl;
    cout<< "2 Online payment"<<endl;
    cout<< "Enter your choice : ";
    int n;
    cin>>n;
    if(n==1)
        cout<< "You order successful"<<endl;
    else if(n==2)
    {
        FILE *hptl;
        int m[100],i=0,j=0;
        char s[50];
        hptl=fopen("payment option.txt","r");
        if(hptl==NULL)
            cout<< "File does not exist."<<endl;
        else
        {
            while(!feof(hptl))
            {
                fscanf(hptl, "%d",&m[i]);
                fscanf(hptl, "%s",&s);
                cout<<m[i]<< " "<<s<<endl;
                i++;
            }
            fclose(hptl);

            payment2();
        }
    }
}


address()
{
    FILE *hptl;
    char name[50],loc[100];
    unsigned long long int mn;
    hptl=fopen("address.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "Enter your address."<<endl;
        cout<< "Name : ";
        getchar();
        gets(name);
        fprintf(hptl,"Name : %s\n",name);
        cout<< "Mobile No : ";
        cin>>mn;
        fprintf(hptl,"Mobile No : %llu\n",mn);
        cout<< "Location : ";
        getchar();
        gets(loc);
        fprintf(hptl,"Location : %s\n",loc);

        payment();

    }
    fclose(hptl);
}

for_buy_medicine()
{
    cout<< "enter your choice : ";
    FILE *hptl;
    int n,m;
    cin>>n;
    char s[50];
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(1)
        {
            fscanf(hptl, "%d",&m);
            fscanf(hptl, "%s",&s);
            if(m==n)
            {
                cout<<m<< " "<<s<<endl;



                hptl=fopen("address.txt","a");
                if(hptl==NULL)
                    cout<< "File does not exist."<<endl;
                else
                    fprintf(hptl,"Medicine : %s\n",s);



                address();
                break;
            }
        }
    }
    fclose(hptl);
}

medicine_for_you()
{
    struct COVID med;
    FILE *hptl;
    int n;
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "medicine."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%d %s",&n,&med.m_n);
            cout<<n<< " " <<med.m_n<<endl;
        }
    }
    fclose(hptl);

    for_buy_medicine();
}

Home_user()
{
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #           Home page           #"<<endl;
    cout<< "                                        #################################"<<endl;

    cout<< "1 hospital"<<endl;
    cout<< "2 doctors"<<endl;
    cout<< "3 covid test location"<<endl;
    cout<< "4 hot line number"<<endl;
    cout<< "5 prevent covid & first aid"<<endl;
    cout<< "6 medicine for you"<<endl;

    int a;
    cout<< "choose your option : ";
    cin>>a;
    switch(a)
    {
    case 1:
        hospital_user();
        break;

    case 2:
        doctors_user();
        break;
    case 3:
        covid_test_location_user();
        break;
    case 4:
        hot_line_number_user();
        break;
    case 5:
        prevent_covid_first_aid_user();
        break;
    case 6:
        medicine_for_you();
        break;
    }
}
user_panel()
{

    cout<< "                                        #################################"<<endl;
    cout<< "                                        #           For login           #"<<endl;
    cout<< "                                        #################################"<<endl;

    char name[50],password[50];
    cout<< "user name : ";
    getchar();
    gets(name);

    cout<< "password : ";
    cin>>password;

    Home_user();
}
///############### user panel (end) #################///

int main()
{
    cout<< "                                        #################################"<<endl;
    cout<< "                                        # Welcome to COVID health care. #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 admine panel                |"<<endl;
    cout<< "                                        | 2 user panel                  |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
    int n;
    cin>>n;
    if(n==1)
        admin_panel();
    else if(n==2)
        user_panel();
    return 0;
}


