#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
class student
{
    int mat,phy,che,total,grade,rollno,per;
    string name;
    public:
    void setName(string s)
    {
        if(s!="\0")
        name=s;
        else
        cout<<"Wrong name entered"<<endl;
    }
    void setRollno(int r)
    {
        if(r>0)
        rollno=r;
        else
        cout<<"Wrong rollno entered"<<endl;
    }
    void setPhy(int p)
    {
        if(p>=0)
        phy=p;
        else
        cout<<"Wrong physics marks entered"<<endl;
    }
    void setChe(int c)
    {
        if(c>=0)
        che=c;
        else
        cout<<"Wrong chemistry marks entered"<<endl;
    }
    void setMat(int m)
    {
        if(m>=0)
        mat=m;
        else
        cout<<"Wrong maths marks entered"<<endl;
    }
    
    string getName()
    {
        return name;
    }
    int getRollno()
    {
        return rollno;
    }
    int getTotal()
    {
        total=mat+phy+che;
        return total;
    }
    int getper()
    {
        per=total*100/300;
        return per;
    }
    string sgetGrade()
    {
        if(per>=95)
        return "A+";

        else if(per>=85)
        return "A";

        else if(per>=65)
        return "B";

        else if(per>=45)
        return "C";

        else if(per>=35)
        return "P";

        else if(per<35)
        return "F";

        else
        return "0";
    }
};
int main()
{
    student d;
    int m,p,c,r;
    string s;
    cout<<"Enter your name->"<<endl;
    getline(cin,s);
    d.setName(s);
    cout<<"Enter your rollno->"<<endl;
    cin>>r;
    d.setRollno(r);
    cout<<"Enter your physics marks->"<<endl;
    cin>>p;
    d.setPhy(p);
    cout<<"Enter your maths marks->"<<endl;
    cin>>m;
    d.setMat(m);
    cout<<"Enter your chemistry marks->"<<endl;
    cin>>c;
    d.setChe(c);
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"Your total marks is="<<d.getTotal()<<endl;
    cout<<"Yout total percentage becomes="<<d.getper()<<"%"<<endl;
    cout<<"Your alloted grade is="<<d.sgetGrade()<<endl;
}