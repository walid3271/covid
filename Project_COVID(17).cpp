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
///all functions start
void hospital_add();//add
void hospital_show();//show
void hospital_delete();//delete
void hospital();

void doctors_add();//add
void doctors_show();//show
void doctors_delete();//delete
void doctors();

void location_add();//add
void location_show();//show
void location_delete();//delete
void covid_test_location();

void number_add();//add
void number_show();//show
void number_delete();//delete
void hot_line_number();

void first_aid_info_add();//add
void first_aid_info_show();//show
void first_aid_info_delete();//delete
void prevent_covid_first_aid();


void medicine_add();//add
void medicine_show();//show
void medicine_delete();//delete

void Online_payment_method_for_user_add();//add
void Online_payment_method_for_user_show();//show
void Online_payment_method_for_user_delete();//delete
void Online_payment_method_for_user();
void buy_medicine();

void order_from_user();

void Home();

void admin_panel_login();//admin login

void admin_panel_registration();//admine registration

void admin_panel();

void hospital_user();

void doctors_user();

void covid_test_location_user();

void hot_line_number_user();

void prevent_covid_first_aid_user();

void payment_matching();

void payment(char mn[]);

void address();

void for_buy_medicine();

void medicine_for_you();

void Home_user();

void user_panel();

void user_panel_registration();

void user_panel_login();

void spacef();

void order_confirmation(char t[]);

///all functions end


int main()
{
    //system("cls");
    cout<< "                                        #################################"<<endl;
    cout<< "                                        # Welcome to COVID health care. #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 admine panel                |"<<endl;
    cout<< "                                        | 2 user panel                  |"<<endl;
    cout<< "                                        | 3 Exit                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
    int n;
    cin>>n;

    switch(n)
    {

    case 1:
        system("cls");
        admin_panel();
        break;
    case 2:
        system("cls");
        user_panel();
        break;
    case 3:
        break;
    }
    return 0;
    //system("cls");
}



///############### admine panel (begin) #################///

///hospital (begin)///

void hospital_add()//add
{
    system("cls");
    struct COVID h;
    FILE *hptl;
    hptl=fopen("hospital.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn,mm;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        how many Hospital name you want  "<<endl;
        cout<< "                                        to add? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        add hospital name."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>h.h_n;
            fprintf(hptl, "%s\n",h.h_n);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        cin>>mm;
        switch(mm)
        {
        case 1:
            hospital();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void hospital_show()//show
{
    system("cls");
    struct COVID h;
    FILE *hptl;
    hptl=fopen("hospital.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        hospital name.                   "<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",h.h_n);
            cout<<"                                        "<<h.h_n<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            hospital();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void hospital_delete()//delete
{
    system("cls");
    struct COVID h[500];
    int i=0;
    char Delete_name[50];
    bool r;

    FILE *hptl;
    hptl=fopen("hospital.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Hospital"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&h[i].h_n);
            cout<< "                                        "<<h[i].h_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("hospital.txt","w");
    fclose(hptl);

    hptl=fopen("hospital.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which hospital do you want to"<<endl;
        cout<<"                                         delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,h[j].h_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",h[j].h_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        hospital();
        break;
    case 2:
        break;
    }
    system("cls");
}


void hospital()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add Hospital.                |"<<endl;
    cout<< "                                        |2 Show Hospital.               |"<<endl;
    cout<< "                                        |3 delete Hospital.             |"<<endl;
    cout<< "                                        |4 Back.                        |"<<endl;
    cout<< "                                        |5 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
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
    case 4:
        Home();
        break;
    case 5:
        break;
    }
    system("cls");
}
///hospital (endl) ///


///doctors (bigen)///

void doctors_add()//add
{
    system("cls");
    struct COVID d;
    FILE *hptl;
    hptl=fopen("doctor.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        how many doctors name you want to input? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        input doctors name."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>d.d_n;
            fprintf(hptl, "%s\n",d.d_n);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            doctors();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void doctors_show()//show
{
    system("cls");
    struct COVID d;
    FILE *hptl;
    hptl=fopen("doctor.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        doctors name."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",d.d_n);
            cout<< "                                        "<<d.d_n<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            doctors();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void doctors_delete()//delete
{
    system("cls");
    struct COVID d[500];
    int i=0;
    char Delete_name[50];
    bool r;
    FILE *hptl;
    hptl=fopen("doctor.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Doctors"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&d[i].d_n);
            cout<< "                                        "<<d[i].d_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("doctor.txt","w");
    fclose(hptl);

    hptl=fopen("doctor.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which doctor do you want to"<<endl;
        cout<< "                                        delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,d[j].d_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",d[j].d_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        doctors();
        break;
    case 2:
        break;
    }
    system("cls");
}


void doctors()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add doctors.                  |"<<endl;
    cout<< "                                        |2 Show doctors.                 |"<<endl;
    cout<< "                                        |3 delete doctors.               |"<<endl;
    cout<< "                                        |4 Back.                         |"<<endl;
    cout<< "                                        |5 Exit.                         |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
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
    case 4:
        Home();
        break;
    case 5:
        break;
    }
    system("cls");
}
///doctors (end) ///


///test location (bigen)///

void location_add()//add
{
    system("cls");
    struct COVID l;
    FILE *hptl;
    hptl=fopen("location.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        how many location want to add? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        add location."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>l.l_n;
            fprintf(hptl, "%s\n",l.l_n);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            covid_test_location();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void location_show()//show
{
    system("cls");
    struct COVID l;
    FILE *hptl;
    hptl=fopen("location.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        location name."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",l.l_n);
            cout<< "                                        " <<l.l_n<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            covid_test_location();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void location_delete()//delete
{
    system("cls");
    struct COVID l[500];
    int i=0;
    char Delete_name[50];
    bool r;
    FILE *hptl;
    hptl=fopen("location.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Location"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&l[i].l_n);
            cout<< "                                        "<<l[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("location.txt","w");
    fclose(hptl);

    hptl=fopen("location.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "Which doctor do you want to delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,l[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",l[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        covid_test_location();
        break;
    case 2:
        break;
    }
    system("cls");
}
void covid_test_location()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add location.                |"<<endl;
    cout<< "                                        |2 Show location.               |"<<endl;
    cout<< "                                        |3 delete location.             |"<<endl;
    cout<< "                                        |4 Back.                        |"<<endl;
    cout<< "                                        |5 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
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
    case 4:
        Home();
        break;
    case 5:
        break;
    }
    system("cls");
}
///test location (end) ///

///hot line number (begin) ///

void number_add()//add
{
    system("cls");
    struct COVID numb;
    FILE *hptl;
    hptl=fopen("number.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        how many number you want to input? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        input number."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>numb.num;
            fprintf(hptl, "%llu\n",numb.num);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            hot_line_number();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void number_show()//show
{
    system("cls");
    struct COVID numb;
    FILE *hptl;
    char c[50];
    hptl=fopen("number.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        number."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%llu\n",&numb.num);
            cout<< "                                        " <<numb.num<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            hot_line_number();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void number_delete()//delete
{
    system("cls");
    struct COVID hot[500];
    int i=0;
    char Delete_name[50];
    bool r;
    FILE *hptl;
    hptl=fopen("number.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Numbers"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&hot[i].l_n);
            cout<< "                                        "<<hot[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("number.txt","w");
    fclose(hptl);

    hptl=fopen("number.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "Which Number do you want to delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,hot[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",hot[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        hot_line_number();
        break;
    case 2:
        break;
    }
    system("cls");
}

void hot_line_number()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add number.                  |"<<endl;
    cout<< "                                        |2 Show number.                 |"<<endl;
    cout<< "                                        |3 delete number.               |"<<endl;
    cout<< "                                        |4 Back.                        |"<<endl;
    cout<< "                                        |5 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
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
    case 4:
        Home();
        break;
    case 5:
        break;
    }
    system("cls");
}
///hot line number (end) ///

///prevent covid & first aid (bigen) ///

void first_aid_info_add()//add
{
    system("cls");
    struct COVID pre;
    FILE *hptl;
    hptl=fopen("first_aid.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        how many lines you want to input? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        input first aid info and prevent "<<endl;
        cout<< "                                        policy."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>pre.p_d;
            fprintf(hptl, "%s\n",pre.p_d);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            prevent_covid_first_aid();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void first_aid_info_show()//show
{
    system("cls");
    struct COVID pre;
    FILE *hptl;
    hptl=fopen("first_aid.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        first aid info and prevent policy."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",pre.p_d);
            cout<< "                                        " <<pre.p_d<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            prevent_covid_first_aid();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void first_aid_info_delete()//delete
{
    system("cls");
    struct COVID first_aid[500];
    int i=0;
    char Delete_name[50];
    bool r;
    FILE *hptl;
    hptl=fopen("first_aid.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        first_aid"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&first_aid[i].l_n);
            cout<< "                                        "<<first_aid[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("first_aid.txt","w");
    fclose(hptl);

    hptl=fopen("first_aid.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "Which Number do you want to delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,first_aid[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",first_aid[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        prevent_covid_first_aid();
        break;
    case 2:
        break;
    }
    system("cls");
}
void prevent_covid_first_aid()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add first aid info.          |"<<endl;
    cout<< "                                        |2 Show first aid info.         |"<<endl;
    cout<< "                                        |3 delete first aid info.       |"<<endl;
    cout<< "                                        |4 Back.                        |"<<endl;
    cout<< "                                        |5 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
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
    case 4:
        Home();
        break;
    case 5:
        break;
    }
    system("cls");
}
///prevent covid & first aid (end) ///

///Buy medicine (bigen)///

void medicine_add()//add
{
    system("cls");
    struct COVID med;
    FILE *hptl;
    int m;
    hptl=fopen("medicine.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        how many medicine you want to input? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        input medicine."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>m>>med.m_n;
            fprintf(hptl, "%d %s\n",m,med.m_n);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            buy_medicine();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void medicine_show()//show
{
    system("cls");
    struct COVID med;
    FILE *hptl;
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        medicine."<<endl;
        while(!feof(hptl))
        {
            fgets(med.m_n,20,hptl);
            cout<< "                                        "<<med.m_n;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        int mm;
        cout<< "                                        Choose option : ";
        cin>>mm;
        switch(mm)
        {
        case 1:
            buy_medicine();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void medicine_delete()//delete
{
    system("cls");
    struct COVID medicine[500];
    int i=0;
    char Delete_name[50];
    bool r;
    FILE *hptl;
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        medicine"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&medicine[i].l_n);
            cout<< "                                        "<<medicine[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("medicine.txt","w");
    fclose(hptl);

    hptl=fopen("medicine.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "Which medicine do you want to delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,medicine[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",medicine[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        buy_medicine();
        break;
    case 2:
        break;
    }
    system("cls");
}

void order_from_user()
{
    system("cls");
    FILE *hptl;
    char s[100];
    hptl=fopen("address.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ------------------------------------------------------------------"<<endl;
        while(!feof(hptl))
        {
            fgets(s,200,hptl);
            cout<< "                                        ";
            cout<<s;
        }
        cout<<endl<< "                                        ------------------------------------------------------------------"<<endl;
    }
    fclose(hptl);
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        Home();
        break;
    case 2:
        break;
    }
    system("cls");
}

void Online_payment_method_for_user()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add payment method.          |"<<endl;
    cout<< "                                        |2 Show payment method.         |"<<endl;
    cout<< "                                        |3 delete payment method.       |"<<endl;
    cout<< "                                        |4 Back.                        |"<<endl;
    cout<< "                                        |5 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        Online_payment_method_for_user_add();
        break;
    case 2:
        Online_payment_method_for_user_show();
        break;
    case 3:
        Online_payment_method_for_user_delete();
        break;
    case 4:
        Home();
        break;
    case 5:
        break;
    }
    system("cls");
}

void Online_payment_method_for_user_add()//add
{
    system("cls");
    FILE *hptl;
    int m;
    char p_m[50];
    hptl=fopen("payment option.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        How many payment methods do you"<<endl;
        cout<< "                                        want to add?"<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        Input payment methods."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>m;
            gets(p_m);
            fprintf(hptl,"%d %s\n",m,p_m);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            Online_payment_method_for_user();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void Online_payment_method_for_user_show()//show
{
    system("cls");
    FILE *hptl;
    char p_m[50];
    hptl=fopen("payment option.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(!feof(hptl))
        {
            fgets(p_m,30,hptl);
            cout<< "                                        ";
            cout<<p_m;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            Online_payment_method_for_user();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void Online_payment_method_for_user_delete()//delete
{
    system("cls");
    struct COVID payment[500];
    int i=0;
    char Delete_name[50];
    bool r;
    FILE *hptl;
    hptl=fopen("payment option.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        payment"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&payment[i].l_n);
            cout<< "                                        "<<payment[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("payment option.txt","w");
    fclose(hptl);

    hptl=fopen("payment option.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "Which payment do you want to delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,payment[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",payment[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        buy_medicine();
        break;
    case 2:
        break;
    }
    system("cls");
}

void buy_medicine()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add medicine.                |"<<endl;
    cout<< "                                        |2 Show medicine.               |"<<endl;
    cout<< "                                        |3 Delete medicine.             |"<<endl;
    cout<< "                                        |4 Online payment for user.     |"<<endl;
    cout<< "                                        |5 Back.                        |"<<endl;
    cout<< "                                        |6 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
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
    case 5:
        Home();
        break;
    case 6:
        break;
    }
    system("cls");
}
///Buy medicine (end)///


void Home()
{
    system("cls");
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #           Home page           #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 hospital                     |"<<endl;
    cout<< "                                        |2 doctors                      |"<<endl;
    cout<< "                                        |3 covid test location          |"<<endl;
    cout<< "                                        |4 hot line number              |"<<endl;
    cout<< "                                        |5 prevent covid & first aid    |"<<endl;
    cout<< "                                        |6 Buy medicine                 |"<<endl;
    cout<< "                                        |7 Order from user              |"<<endl;
    cout<< "                                        |8 Logout                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    int a;
    cout<< "                                        choose your option : ";
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
    case 7:
        order_from_user();
        break;
    case 8:
        break;
    }
    system("cls");
}


void admin_panel_login()//admin login
{
    system("cls");
    cout<< "                                                                         "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #             login             #"<<endl;
    cout<< "                                        #################################"<<endl;

    FILE *hptl;
    char name[50],name_user[50],mail[50];
    char pass_user[50],pass[50];
    hptl=fopen("registration.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(1)
        {
            cout<< "                                        ----------------------------------"<<endl;
            cout<< "                                        UserName/Mail : ";
            cin>>name_user;
            cout<< "                                        Password : ";
            cin>>pass_user;
            fscanf(hptl,"%s%s%s",&name,&mail,&pass);
            bool result=strcmp(name,name_user);
            bool result2=strcmp(mail,name_user);
            bool result3=strcmp(pass,pass_user);

            if (result==0 || result2==0 && result3==0)
            {
                system("cls");
                Home();
                break;
            }
            else
                cout<<endl<< "                                        Oops! (Wrong information)"<<endl;
            cout<< "                                        ----------------------------------"<<endl;
        }
    }
    fclose(hptl);
}

void admin_panel_registration()//admine registration
{
    system("cls");
    cout<< "                                                                         "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #          Registration         #"<<endl;
    cout<< "                                        #################################"<<endl;
    FILE *hptl;
    char name[50],mail[50],pass[50];
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
        gets(pass);
        cout<< "                                        --------------------------------"<<endl;
        fprintf(hptl,"%s %s %s",name,mail,pass);
    }
    fclose(hptl);
    system("cls");
    admin_panel_login();
}

void admin_panel()
{
    system("cls");
    cout<< "                                                                          "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #     welcome to admine panel   #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Admine Registration.        |"<<endl;
    cout<< "                                        | 2 Admine Login.               |"<<endl;
    cout<< "                                        | 3 Back.                       |"<<endl;
    cout<< "                                        | 4 Exit.                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int n;
    cin>>n;
    switch(n)
    {
    case 1:
        admin_panel_registration();
        break;
    case 2:
        admin_panel_login();
        break;
    case 3:
        main();
        break;
    case 4:
        break;
    }
    system("cls");
}


///############### admin panel (end) #################///


///############### user panel (begin) #################///
void hospital_user()
{
    system("cls");
    struct COVID h;
    FILE *hptl;
    hptl=fopen("hospital.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {



        cout<< "                                        #################################"<<endl;
        cout<< "                                        #           Hospitals           #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",h.h_n);
            cout<< "                                        ";
            cout<<h.h_n<<endl;
        }
        fclose(hptl);
        cout<< "                                        | 1 Back.                       |"<<endl;
        cout<< "                                        | 2 Exit.                       |"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int xx;
        cin>>xx;
        switch(xx)
        {
        case 1:
            Home_user();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void doctors_user()
{
    system("cls");
    struct COVID d;
    FILE *hptl;
    hptl=fopen("doctor.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #            Doctors            #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",d.d_n);
            cout<< "                                        ";
            cout<<d.d_n<<endl;
        }
        fclose(hptl);
        cout<< "                                        | 1 Back.                       |"<<endl;
        cout<< "                                        | 2 Exit.                       |"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int xx;
        cin>>xx;
        switch(xx)
        {
        case 1:
            Home_user();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void covid_test_location_user()
{
    system("cls");
    struct COVID l;
    FILE *hptl;
    hptl=fopen("location.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #            Location           #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",l.l_n);
            cout<< "                                        ";
            cout<<l.l_n<<endl;
        }
    }
    fclose(hptl);
    cout<< "                                        | 1 Back.                       |"<<endl;
    cout<< "                                        | 2 Exit.                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int xx;
    cin>>xx;
    switch(xx)
    {
    case 1:
        Home_user();
        break;
    case 2:
        break;
    }
    system("cls");
}
void hot_line_number_user()
{
    system("cls");
    struct COVID numb;
    FILE *hptl;
    char c[50];
    hptl=fopen("number.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #            Numbers            #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%llu\n",&numb.num);
            cout<< "                                        ";
            cout<<numb.num<<endl;
        }
        fclose(hptl);
        cout<< "                                        | 1 Back.                       |"<<endl;
        cout<< "                                        | 2 Exit.                       |"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int xx;
        cin>>xx;
        switch(xx)
        {
        case 1:
            Home_user();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void prevent_covid_first_aid_user()
{
    system("cls");
    struct COVID pre;
    FILE *hptl;
    hptl=fopen("first_aid.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #  First aid & Prevent policy   #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",pre.p_d);
            cout<<pre.p_d<<endl;
            cout<< "                                        ";

        }
        fclose(hptl);
        cout<< "                                        | 1 Back.                       |"<<endl;
        cout<< "                                        | 2 Exit.                       |"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int xx;
        cin>>xx;
        switch(xx)
        {
        case 1:
            Home_user();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}


void payment_matching()
{
    //system("cls");
    FILE *hptl;
    int m;
    char s[50];
    hptl=fopen("payment option.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    cout<< "                                        Choice option : ";
    int x;
    cin>>x;
    while(!feof(hptl))
    {
        fscanf(hptl, "%d %s",&m,&s);
        if(m==x)
        {
            cout<< "                                        ";
            cout<<m<<" "<<s<<endl;

            FILE *hptl;
            hptl=fopen("address.txt","a");
            if(hptl==NULL)
                cout<< "File does not exist."<<endl;
            else
            {
                fprintf(hptl,"%s ",s);
                cout<< "                                        Bank number : ";
                char t[50];
                getchar();
                gets(t);
                fprintf(hptl,"%s\n",t);
                fclose(hptl);
                order_confirmation(t);
                break;
            }
        }
    }
    fclose(hptl);
    //system("cls");
}

void order_confirmation(char t[])
{
    //system("cls");
    FILE *hptl;
    char s1[50],s2[50],s3[50],s4[50],i2[50],i3[50];
    bool r;
    hptl=fopen("address.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(!feof(hptl))
        {
            fscanf(hptl,"%s %s %s %s %s %s",s1,s2,i2,s3,s4,i3);
            r=strcmp(t,i3);
            if(r==0)
            {
                cout<< "                                        ---------------------------------"<<endl;
                cout<< "                                        Medicine    : "<< s1<<endl;
                cout<< "                                        Name        : "<< s2<<endl;
                cout<< "                                        Mobile      : "<< i2<<endl;
                cout<< "                                        Address     : "<< s3<<endl;
                cout<< "                                        Bank        : "<< s4<<endl;
                cout<< "                                        Bank Number : "<< i3<<endl;
                cout<< "                                        ---------------------------------"<<endl;
                break;
            }
        }
        fclose(hptl);
    }
    //system("cls");
}

void spacef()
{
    //system("cls");
    FILE *hptl;
    char s4[]="NULL",s5[]="NULL";
    hptl=fopen("address.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        fprintf(hptl, "%s %s\n",s4,s5);
    }
    fclose(hptl);
    //system("cls");
}

void payment(char mn[])
{
    //system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Cash on delivery            |"<<endl;
    cout<< "                                        | 2 Online payment              |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Enter your choice : ";
    int n;
    cin>>n;
    if(n==1)
    {
        spacef();
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        You order successful"<<endl;

        FILE *hptl;
        char s1[50],s2[50],s3[50],i[50],g[50],h[50];
        bool r;
        hptl=fopen("address.txt","r");
        if(hptl==NULL)
            cout<< "File does not exist."<<endl;
        else

        {
            while(!feof(hptl))
            {
                fscanf(hptl,"%s %s %s %s %s %s",s1,s2,i,s3,g,h);

                r=strcmp(mn,i);
                if(r==0)
                {
                    cout<< "                                        Medicine    : "<< s1<<endl;
                    cout<< "                                        Name        : "<< s2<<endl;
                    cout<< "                                        Mobile      : "<< i<<endl;
                    cout<< "                                        Address     : "<< s3<<endl;
                    cout<< "                                        ---------------------------------"<<endl;
                    break;
                }
            }
            fclose(hptl);
            //system("cls");
        }
    }
    else if(n==2)
    {
        FILE *hptl;
        int m;
        char s[50];
        hptl=fopen("payment option.txt","r");
        if(hptl==NULL)
            cout<< "File does not exist."<<endl;
        else
        {
            cout<< "                                        ---------------------------------"<<endl;
            while(!feof(hptl))
            {
                fscanf(hptl, "%d %s",&m,&s);
                cout<< "                                        ";
                cout<<m<< " "<<s<<endl;
            }
            cout<< "                                        ---------------------------------"<<endl;
            fclose(hptl);

            payment_matching();
        }
    }
}


void address()
{
    //system("cls");
    FILE *hptl;
    char name[50],loc[100],mn[50];
    hptl=fopen("address.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Enter your address."<<endl;
        cout<< "                                        Name : ";
        getchar();
        gets(name);
        cout<< "                                        Mobile No : ";
        gets(mn);
        cout<< "                                        Location : ";
        getchar();
        gets(loc);
        fprintf(hptl,"%s %s %s ",name,mn,loc);
        fclose(hptl);
        system("cls");
        payment(mn);

    }
    //system("cls");
}

void for_buy_medicine()
{
    //system("cls");
    cout<< "                                        Choose option : ";
    FILE *hptl;
    int n,m;
    cin>>n;
    char s[50];
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(!feof(hptl))
        {
            fscanf(hptl, "%d %s",&m,&s);
            if(m==n)
            {
                cout<< "                                        ";
                cout<<m<< " "<<s<<endl;


                hptl=fopen("address.txt","a");
                if(hptl==NULL)
                    cout<< "File does not exist."<<endl;
                else
                {
                    fprintf(hptl,"%s ",s);
                    fclose(hptl);
                }
                address();
                break;
            }
        }
    }
    fclose(hptl);
    //system("cls");
}

void medicine_for_you()
{
    //system("cls");
    struct COVID med;
    FILE *hptl;
    int n;
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #            Medicines          #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%d %s",&n,&med.m_n);
            cout<< "                                        ";
            cout<<n<< " " <<med.m_n<<endl;
        }
        fclose(hptl);
    }
    for_buy_medicine();
    //system("cls");
}

void Home_user()
{
    //system("cls");
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #           Home page           #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 hospital                    |"<<endl;
    cout<< "                                        | 2 doctors                     |"<<endl;
    cout<< "                                        | 3 covid test location         |"<<endl;
    cout<< "                                        | 4 hot line number             |"<<endl;
    cout<< "                                        | 5 prevent covid & first aid   |"<<endl;
    cout<< "                                        | 6 medicine for you            |"<<endl;
    cout<< "                                        | 7 Logout.                     |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int a;
    cin>>a;
    switch(a)
    {
    case 1:
        system("cls");
        hospital_user();
        break;

    case 2:
        system("cls");
        doctors_user();
        break;
    case 3:
        system("cls");
        covid_test_location_user();
        break;
    case 4:
        system("cls");
        hot_line_number_user();
        break;
    case 5:
        system("cls");
        prevent_covid_first_aid_user();
        break;
    case 6:
        system("cls");
        medicine_for_you();
        break;
    case 7:
        break;
    }
    //system("cls");
}
void user_panel()
{
    //system("cls");
    cout<< "                                                                         "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #     welcome to user panel     #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 User panel registration.    |"<<endl;
    cout<< "                                        | 2 User panel login.           |"<<endl;
    cout<< "                                        | 3 Back.                       |"<<endl;
    cout<< "                                        | 4 Exit.                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        choose your option : ";
    int n;
    cin>>n;
    switch(n)
    {
    case 1:
        system("cls");
        user_panel_registration();
        break;
    case 2:
        system("cls");
        user_panel_login();
        break;
    case 3:
        system("cls");
        main();
        break;
    case 4:
        break;
    }
    //system("cls");
}

void user_panel_registration()
{
    //system("cls");
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #       For registration        #"<<endl;
    cout<< "                                        #################################"<<endl;

    FILE *hptl;
    char name[50];
    unsigned long long int pass;
    hptl=fopen("registration for user.txt","a");
    if(hptl==NULL)
        cout<< "file dose not exist"<<endl;
    else
    {
        cout<< "                                        Name : ";
        getchar();
        gets(name);
        cout<< "                                        Password : ";
        cin>>pass;
        fprintf(hptl, "%s %llu\n",name,pass);
    }
    fclose(hptl);
    system("cls");
    user_panel_login();
}
void user_panel_login()
{
    //system("cls");
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #           For login           #"<<endl;
    cout<< "                                        #################################"<<endl;
    while(1)
    {


        FILE *hptl;
        char name[50],name2[50];
        unsigned long long int pass,pass2,r,k=1;
        hptl=fopen("registration for user.txt","r");
        if(hptl==NULL)
            cout<< "File dose not exist."<<endl;
        else
        {
            cout<< "                                        ---------------------------------"<<endl;
            cout<< "                                        Name : ";
            getchar();
            gets(name2);
            cout<< "                                        Password : ";
            cin>>pass2;
            cout<< "                                        ---------------------------------"<<endl;
            while(!feof(hptl))
            {
                fscanf(hptl, "%s %llu",&name,&pass);
                r=strcmp(name,name2);
                if(r==0 && pass==pass2)
                {
                    system("cls");
                    Home_user();
                    k=0;
                    break;
                }
            }
            if(k==1)
                cout<< "                                        Oops! wrong information."<<endl;
            else if(k==0)
                break;
            fclose(hptl);
        }
    }
    //system("cls");
}
///############### user panel (end) #################///
