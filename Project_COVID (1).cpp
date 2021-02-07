#include<bits/stdc++.h>
using namespace std;

struct COVID
{
    char h_n[50];
    char d_n[50];
    char l_n[50];
    unsigned long long int num;
    char p_d[50];
};


///############### admin panel #################///

///hospital///

hospital_add()//add
{
    struct COVID h;
    FILE *hptl;
    hptl=fopen("hospital.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "input hospital name."<<endl;
        for(int i=0; i<2; i++)
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
///hospital///


///doctors///

doctors_add()//add
{
    struct COVID d;
    FILE *hptl;
    hptl=fopen("doctor.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "input doctors name."<<endl;
        for(int i=0; i<2; i++)
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
///doctors///


///test location///

location_add()//add
{
    struct COVID l;
    FILE *hptl;
    hptl=fopen("location.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "input location."<<endl;
        for(int i=0; i<2; i++)
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
///test location///

///hot line number///

number_add()//add
{
    struct COVID numb;
    FILE *hptl;
    hptl=fopen("number.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "input number."<<endl;
        for(int i=0; i<2; i++)
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


///prevent covid & first aid///

first_aid_info_add()//add
{
    struct COVID pre;
    FILE *hptl;
    hptl=fopen("first_aid.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "input first aid info and prevent policy."<<endl;
        for(int i=0; i<2; i++)
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
///prevent covid & first aid///





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

    }
}


admin_panel_login()//admin login
{
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
            cout<< "user name : ";
            getchar();
            gets(name_user);

            cout<< "password : ";
            cin>>pass_user;

            fscanf(hptl,"%s%d",&name,&pass);
            bool result=strcmp(name,name_user);
            if(result==0 && pass==pass_user)
            {
                Home();
                break;
            }
            else
                cout<< "Oops! wrong user name or password (try again)"<<endl;
        }
    }
    fclose(hptl);
}




admin_panel_registration()//admin registration
{

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
        cout<< "user name : ";
        getchar();
        gets(name);

        cout<< "email : ";
        gets(mail);

        cout<< "password : ";
        cin>>pass;
        fprintf(hptl,"%s\n%d\n",name,pass);
    }
    fclose(hptl);
    admin_panel_login();
}

admin_panel()
{
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #     welcome to admin panel    #"<<endl;
    cout<< "                                        #################################"<<endl;

    int n;
    cout<< "1 admin panel registration."<<endl;
    cout<< "2 admin panel login."<<endl;
    cout<< "choose your option : ";
    cin>>n;
    if(n==1)
        admin_panel_registration();
    else if(n==2)
        admin_panel_login();
}


///############### admin panel #################///



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


int main()
{
    cout<< "                                        #################################"<<endl;
    cout<< "                                        # Welcome to COVID health care. #"<<endl;
    cout<< "                                        #################################"<<endl;





    int n;
    cout<< "1 admin panel"<<endl;
    cout<< "2 user panel"<<endl;
    cin>>n;
    if(n==1)
        admin_panel();
    else if(n==2)
        user_panel();
    return 0;
}













