#include<windows.h>
#include<iostream>
#include<mmsystem.h>
using namespace std;

void design(){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=69; j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return;
}

int main()
{

 int a;
 int i;
 char h = 3, c=4, j=1, k=5;
 cout<<"\n\n";
 cout<<"\t\t\t\tFrom  :  Parul \n";
 cout << "\t\t\t\tTo  :  Someone  \n\n";
 Sleep(1000);
 cout << "\t\t";
 for (i = 0; i<21; i++)
  cout << "_"<< c;
cout<<"_";
 cout << "\n\n";

 Sleep(1000);
 cout << "\t\t\t\ti i i i i\n";

 Sleep(1000);
 cout << "\t\t\t\ti i i i i\n";

 Sleep(1000);
 cout << "\t\t\t      __i_i_i_i_i__\n";

 Sleep(1000);
 cout << "\t\t\t     |" << h << "            " << h << "|\n";

 Sleep(1000);
 cout << "\t\t\t   __| " << h << "  24/10  " << h << "  |__\n";

 Sleep(1000);
 cout << "\t\t\t  | " << h << "   " << h << "       " << h << "   " << h << "  |\n\a";

 Sleep(1000);
 cout << "\t\t\t__|" << h << "   HAPPY     " << h << "   " << h << " |__\n\a";

 Sleep(1000);
 cout << "\t\t       | " << h << "    " << h << "     BIRTHDAY    " << h << " |\n\a";

 Sleep(1000);
 cout << "\t\t       |" << h << "   " << h << "    " << h << "    " << h << "     " << h << "   " << h << " |\n";


 Sleep(1000);
 cout << "\t\t       | " << h << " " << h << " " << h << " " << h << "  PANKAJ  " << h << " " << h << " " << h << " " << h << " |\n";

 Sleep(1000);
 cout << "\t\t       |__________________________|\n\n";
 
Sleep(1000);
 cout << "\t\t";
 for (i = 0; i<21; i++)
  cout << "_" << k;
cout<<"_";

Sleep(1000);
 cout<<"\n\n HAPPY BIRTHDAY\n";
 Sleep(1000);
 cout<<"\t\t\tBuddy "<<j<<"\n";
 Sleep(1000);
 cout<<"\t\t\t\t\t"<< h<<"\n\n";
 design();
 return 0;
}


