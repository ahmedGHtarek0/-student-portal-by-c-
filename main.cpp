#include <bits/stdc++.h>
using namespace std ;
///****GBA FUNCTION ****
 void gba(int y){
if(y<50){
    cout <<" F "<<endl;
}
if(y>=50&&y<=65){
    cout<< " D "<<endl;
}

if(y>=66&&y<=75){
    cout<< " C "<<endl;
}
if(y>=76&&y<=85){
cout<< " B "<<endl;
}
if(y>=86&&y<=100){
    cout<< " A "<<endl;
}
}
///****STUDENT CLASS that take the name and the number of the student****
class student {
public : string name,nam ;
public : int registernum;
int reg;
int savetotal[100];
///****function input the name and the number of the student****
 public  : void sett(){
    cout<<"enter your name and number : "<<endl;
    cout<<"first name : ";
cin>>name;
cout<<"second name : ";
cin>>nam;
    cout<<"number : ";
    cin>>registernum;
}
};
///****class of subject  that have the degree , name ,level grade of subject****
class sub {

double  degree,t=0;
string namee;
double  level,grade;
public : int total=0,i=600;
double gbat;
int u1,u2,u3,u4,u5,u6,u7;
double deg[10000],gg[10000];
string s[10000];
int r=0;
/// function of subject =>
 public : void input(){

     cout<<"enter your number of course : ";
     cin>>r;
     for(int p=0;p<r;p++){
cout<<"enter your  name , level , degree and grade of cousre  : "<<endl;
cout<<"name : ";
cin>>namee;
s[p]=namee;
cout<<"degree : ";
cin>>degree;
total+=degree;
deg[p]=degree;
cout<<"grade : ";
cin>>grade;
gg[p]=grade;
cout<<"level : ";
cin>>level;
     }
}
/// function that print all grade in every course ,total GBA ,total degree  and average degree
public : void print(){
   for(int p=0;p<r;p++){
    cout<<s[p]<<"  your course GBA is =: ";
    gba(deg[p]);
    cout<<"your grade is  "<<gg[p];
    cout<<endl;
   }
   i-=total;
   gbat=i/15;
   cout<<"your total GBA is : "<<setprecision(2)<<gbat/10<<endl;
   cout<<"your total degree is : "<<total<<endl;
   cout<<"your average degree is : "<<total/r<<endl;
}
};

int main()
{
    int e=0;
    string savename[1000];
    S:
        int n=100;
        int arr[n];

    int w=0;
    cout<<"******************STUDENT PORTAL******************"<<endl;
student s;
s.sett();
savename[e]=s.name+s.nam;
sub h;
h.input();
s.savetotal[e]=h.total;
arr[e]=s.savetotal[e];
///input the first and second name +register number =>
cout<<"********************************************************"<<endl;
cout<<"name := "<<s.name<<" "<<s.nam<<endl;
cout<<"register number is := "<<s.registernum<<endl;
h.print();
cout<<"if you wanna  register another student click 1 else clik 2 : "<<endl;
cout<<"click : : ";
cin>>w;
if(w==1){
        e++;
    goto S;
}
if(w==2){
        /// print the big grade in ascending order
cout<<"****congratulation****"<<endl;
double o=600;
double k=0;
sort(arr,arr+n);
for(int i=100;i>0;i--){
        if(arr[i]!=0){
    for(int j=0;j<100;j++){
        if(arr[i]==s.savetotal[j]){
                o-=s.savetotal[j];
        k=o/15;
            cout<<" * "<<savename[j]<<"  "<<s.savetotal[j]<<" "<<setprecision(2)<<k/10<<" * " ;
            cout<<endl;
        }

    }
        }
}
    cout<<"******************thanks********************";
}

        return 0;
}
