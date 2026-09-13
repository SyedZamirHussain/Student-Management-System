#include <iostream>

using namespace std;
int addstudent(string name[], int roll[], int marks[], int n){



cout<<"enter name"<<endl;
cin>>name[n];
cout<<"enter roll number"<<endl;
cin>>roll[n];
cout<<"enter marks"<<endl;
cin>>marks[n];
return n+1;
}
void display(string name[], int roll[], int marks[], int n)
{
    cout << "Display function called" << endl;
    cout << "n = " << n << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "name = " << name[i] << endl;
        cout << "Roll number = " << roll[i] << endl;
        cout << "marks = " << marks[i] << endl;
    }
}
void search(string name[], int roll[], int marks[], int n)
{
    int r;
   bool found = false;
    cout<<"enter roll number"<<endl;
    cin>>r;
    for(int i =0;i<n;i++){
        if(roll[i]==r){
            cout<<"name "<<name[i]<<endl;
            cout<<"roll no. "<<roll[i]<<endl;
            cout<<"marks "<<marks[i]<<endl;
            found=true;
            break;
        }

    }
   if(found==false){
    cout<<"student not found"<<endl;
   }
}
void average(string name[], int roll[], int marks[], int n){
int sum=0;


for(int i=0;i<n;i++){
   sum=sum+marks[i];
}
 float average=sum/n;
 cout<<"average"<<average<<endl;
}

void highest(string name[], int roll[], int marks[], int n)
{
    int max=0;
    int index=0;
    for(int i=0;i<n;i++){
        if(marks[i]>max){
            max=marks[i];
            index=i;
        }
    }
    cout<<"highest marks = "<<max<<endl;
    cout<<"name = "<<name[index]<<endl;
        cout<<"roll number = "<<roll[index]<<endl;


}

int main()
{
    int n=0;
    string name[50];
int roll[50];
int marks[50];
    int choice;
    do
    {
        cout<<"1. add student"<<endl;
        cout<<"2. display student"<<endl;
        cout<<"3. search"<<endl;
        cout<<"4.average"<<endl;
        cout<<"5. highest"<<endl;
        cout<<"6. exit"<<endl;
  cout<<"enter the choice"<<endl;
  cin>>choice;


    switch(choice){
case 1:
    n=addstudent(name,roll,marks,n);
    cout<<n<<endl;
    break;
case 2:
    display(name, roll, marks, n);
    break;
case 3:
    search(name,roll,marks,n);
    break;
case 4:
    average(name,roll,marks,n);
    break;
case 5:
     highest(name,roll,marks,n);
    break;
case 6:
    cout<<"program ended"<<endl;
    break;
default:
    cout<<"invalid choice";
    break;
    }

}while(choice!=6);
    return 0;
}
