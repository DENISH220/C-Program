#include <iostream>
#include <sdtlib.h>
#include <string.h>
#include <stdio.h>
#include <fstream.h>
#include <conio.h>
char un[20];
class admin
{
    char name [20];
    int totsub;
    char subject [10][10];
    char mobile[15],mail[50],fname[20];
    char passwd[20],rpasswd[20];
public:
    char rollno[15];

     /*this function is used to get the student data entry from
     the Admin portal..all the records entries are made by this method*/
    
    getstdata()
    {
        cout <<"\nEnter the student Name :";
        gets(name);
        cout <<"\nEnter the student ID/Roll No.:";
        cin  >>rollno;
        cout <<"\nEnter the student father's name :";
        gets (fname);
        cout <<"\nEnter the Mobile No.:";
        gets (mobile);
        cout <<"\nEnter the E-mail ID :";
        gets (mail);
        cout <<"\nEnter the total subject :";
        gets (totsub);
        for (int i=0;i<totsub;i++)
        {
            cout <<"\nEnter the subject "<<i+1<<"Name:";
            cin  >>subject[i];
        }
        cout << "\nCreate Your Login Password :";
        cin  >>passwd;
        cout <<"\nEnter the unique Keyword to recover password :";
        cin  >>rpasswd;
        cout <<"\n\nPlease note Your UserName is ID/RollNO.\n";
    }
    // this function authienticates the login of both the student & faculities with 
    //their reference to thier unique ID/Password login is provided
    int login ()
    {
        if ((strcmp(::un,rollno))==0)
        {
            cout <<"\nEnter the login Password :";
            int len=0;
            len=strlen(passwd);
            char inputpasswd[20];
            for(int i=0;i<len;i++)
            {
                inputpasswd[i]=getch();
                cout <<"#";
            }
            inputpasswd[i]=NULL;
            //cout <<"\nThe Entered Password is"<<inputpasswd;
        if((strcmp(::un,rollno)==0)&&(strcmp(passwd,inputpasswd)==0))
            return 1;
            else
            return 0;
            
        }
        else
        return 0;
    }
    //This function help both the student & faculties to recoverthe password
    //with the help of unique keyword provided by the Admin
    int recover()
    {
        //cout <<"\nThe input user name is"<<::un;
        char key[20];
        if (strcmp(::un,rollno)==0)
        {
            cout <<"\nEnter the unique keyword(provided by admin):";
            cin  >>key;
            if((strcmp(key,rpasswd)==0))
            {
                cout <<"\nYou are a valid user.";
                cout <<"\nYour password is "<<passwd;
                cout <<"\nPlease exit to login again";
                return 1;
            }
            else
            return 0;
        }
        else 
        return 0;
    }
    //This function displays the faculty profile to the faculty at their respective 
    //portals.
    int faprofile ()
    {
        if((strcmp(::un,rollno)==0))
        {
            cout <<"\nFaculty Name           :"<<name;
            cout <<"\nFaculty father's Name  :"<<fname;
            cout <<"\nFaculty Mobile No.     :"<<mobile;
            cout <<"\nFaculty Email ID       :"<<mail;
            return 0;
        }
        else 
        return 0;
    }
    //This function displays the different subject of the faculty at their 
    //respective portals
    int knowfasub()
    {
        if((strcmp(::un,rollno==0)==0))
        {
            cout <<"\nFaculty Total subjects:"<<totsub;
            for(int i=0;i<totsub;i++)
            {
                cout <<"\n\tSubject"<<i+1<<":"<<subject[i];
            }
            return 0;
        }
        else 
    return 0;
    }
    //This function helps a faculty to add a subject in their module.
    void addfasub()
   {
        if((strcmp(::un,rollno)==0))
        {
            cout<<"\nEnter the New Subject :";
            cin>>subject[totsub];
            totsub++;
            cout<<"\n\nNew Subject Added Successfully...";
        }
    }  
    //This fuction helps a faculty to delete a subject from thier module.
    void delfasub()
    {
        knowfasub();
        int de=0;
        if ((strcmp(::un,rollno)==0))
        {
            if(totsub=0||totsub<0)
            {
                totsub=0;
                cout<<"\nNone subject Exist...";
                getch();
                exit(0);
            }
            cout<<"\nEnter the Subject the No. to be Deleted :";
            cin>>de;
            if(de==totsub)
            {
                totsub--;
                strcpy(subject[totsub],"");
            }
            else if(totsub==1)
            {
                totsub=0;
                strcpy(subject[totsub],"");
            }
            else
            {
                de--;
                strcpy(subject[totsub],"");
                for(int p=de;p<totsub;p++)
                {
                    strcpy(subject[p],subject[p+1]);
                }
                totsub--;
            }
            cout <<"\nRecords updated successfully...";
        }    
    }
    //This function help a faculty to modify his personal profile 
    void modfaprofile() 
    {
        if ((strcmp(::un,rollno)==0))
        {
            cout <<"\nThe profile detail are :";
            cout <<"\n1. Faculty E-mail :"<<mail;
            cout <<"\n2. Faculty Mobile :"<<mobile;
            int g==1;
            cout <<"\n\nEnter the Detail No.to be Modified :";
            cin  >>g;
            if(g==1)
            {
                char nmail[50];
                cout <<"\nEnter the new mail address :";
                strcpy(mail,nmail);
                cout <<"\nRecord updated successfully";
            }  
            else if(g==2)
            {
                char nmobile [15];
                cout <<"\nEnter the new mobile no. :";
                gets(nmobile);
                strcpy(mobile,nmobile);
                cout <<"\nRecord updated successfully";
            }
            else 
            cout <<"\nInvalid intput provided...";
        }
    }
    //This function display the student profile at the student portal 
    int stprofile()
    {
        if ((strcmp(::un,rollno)==0))
        {
            cout <<"\nStudent Name            :"<<name;
            cout <<"\nStudent father's Name   :"<<fname;
            cout <<"\nStudent mobile no.      :"<<mobile;
            cout <<"\nStudent E-mail ID       :"<<mail;
            return 1;
        }
        else 
        return 0;
    } 
    //This function display the different enrolled subjects of the respective student
    //according to their profile.
    int knowstsub()
    {
        if ((strcmp(::un,rollno)==0))
        {
            cout <<"\nStudent total subject :"<<totsub;
            for(int i=0;i<totsub;i++)
            {
                cout <<"\n\tsubject "<<i+1<<":"<<subject[i];
            }
            return 1;
        }
        else 
        return 0;
    }
    //This function allows the student to add a subject in total subject of the
    // student profile ...
    void addstsub()
    {
        if ((strcmp(::un,rollno)==0))
        {
            cout <<"\nEnter the New Subject :";
            cin  >>subject[totsub];
            totsub++;
            cout <<"\n\nNew Subject added Successfully...";
        }
    }
    //this function allows the student to delete a subject in  total subjects of the 
    //student profile...
    void delstsub()
    {
        knowstsub();
        int de=0;
        if((strcmp(::un,rollno)==0))
        {
            if(totsub==0||totsub<0)
            {
                totsub=0;
                cout <<"\nNone subjects Exist...";
                getch();
                exit(0);
            }
            cout <<"\nEnter the subject no. to be delete:";
            cin  >>de;
            if (de==totsub)
            {
                totsub--;
                strcpy(subject[totsub],"");
            }
            else if (totsub==1)
            {
                totsub=0;
                strcpy(subject[totsub],"");
            }
            else 
            {
              de--;
              strcpy(subject[totsub],);
              for(int p=de;p<totsub;p++)
              {
                  strcpy(subject[p],subject[p+1]);
              }
              totsub--;
            }
            cout <<"\nRecords Update Successfully...";
        }
    }
    //this funtion allows the student to modify their personal profile details at the 
    //student portal
    void modstprofile ()
    {
        if ((strcmp(::un,rollno)==0))
        {
            cout <<"\nThe Profile Details are :";
            cout <<"\n1. Student E-mail :"<<mail;
            cout <<"\n2. Student mobile :"<<mobile;
            int g=-1;
            cout <<"\n\nEnter the detail no. to be modified :";
            cin  >>g;
            if (g==1)
            {
                char nmail[50];
                cout <<"\nEnter the new mail address :";
                strcpy(mail,nmail);
                cout <<"\nRecords Updated Successfully...";
            }
            else if(g=2)
            {
                char nmobile [15];
                cout <<"\nEnter the New Mobile No.:";
                gets(nmobile);
                strcpy(mobile,nmobile);
                cout <<"\nRecords Updated Successfully...";
            }
            else 
            cout <<"\nInvalid Input Provided...";
        }
    }
    //This funtion allow the Admin to make a new Record Entry for the different new 
    //new faculties ...new faculty record are update with the help of this funtion.
    void getfadata ()
    {
        cout <<"\nEnter the Faculty Name :";
        gets(name);
        cout <<"\nEnter the faculty ID/Roll no.:";
        cin  >>rollno;
        cout <<"\nEnter the faculty father's name :";
        gets(fname);
        cout <<"\nEnter the mobile no.";
        gets(mobile);
        cout <<"\nEnter the E-mail ID :";
        gets(mail);
        cout <<"\nEnter the total subjects:";
        cin  >>totsub;
        //cout <<"\nThe total subjects choosen are :"<<totsub;
        for(int i=0;i<totsub;i++)
        {
            cout <<"\nEnter the subject "<<i+1<<"Name:";
            cin  >>subject[1];
        }
        cout <<"\nCreate Your Login Password :";
        cin  >>passwd;
        cout <<"\nEnter the unique keyword to recover Password :";
        cin  >>rpasswd;
        cout <<"\n\nPlease note your username is ID/roll no.\n";
    }
    //This funtion display all the relevant information to the admin ralated to the 
    //student at the admin portals
    void stdisplay()
    {
        cout <<"\nStudent Name          :"<<name;
        cout <<"\nStudent ID/Roll No.   :"<<rollno;
        cout <<"\nStudent Father's Name :"<<fname;
        cout <<"\nStudent Mobile No.    :"<<mobile;
        cout <<"\nStudent E-mail ID     :"<<mail;
        cout <<"\nStudent Subjects      :"<<totsub;
        for(itn i=0;i<totsub;i++)
        {
            cout <<"\n  Subject"<<i+1<<":"<<subject[i];
        }
        if (totsub==0)
        cout <<"(Note Subject Specified...)";
    }
    //This function display all the relevant infomation to the admin related to the
    //faculty at the admin portals
    void fadisplay()
    {
        cout <<"\nFaculty Name           :"<<name;
        cout <<"\nFaculty ID/Roll No.    :"<<rollno;
        cout <<"\nFaculty Father's Name  :"<<fname;
        cout <<"\nFaculty Mobile No.     :"<<mobile;
        cout <<"\nFaculty E-mail ID      :"<<mail;
        cout <<"\nFaculty Subjects       :"<<totsub;
        for(int i=0;i<totsub;i++)
        {
            cout <<"\nSubject"<<i+1<<":"<<subject[i];
        }
        if(totsub==0)
        cout <<"None Subject Specified...";
    }
}a;
admin f;
//a & f are the objects of the class Admin
void main() 
{
    int ch;
    clrscr();
    cout<<"\n\n\n\t\t\tWelcome to RKGIT Database Portal";
    cout<<"\n\n\n\t\t\t\tEnter to Continue ";
    getch();
    clrscr();
    cout<<"\n\n\n\t\t\tpress 1 for admin";
    cout<<"\n\t\t\tpress 2 for faculty portal";
    cout<<"\n\t\t\tpress 3 for student portal";
    cout<<"\n\n\t\t\tEnter Your Choice : ";
    cin>>ch;
    clrscr();
    if(ch==)
}