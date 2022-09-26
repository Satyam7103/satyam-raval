#include<iostream.h>
#include<conio.h>

class op
{
	int x;
	int y;
	public :
		void getdata()
		{
			cout<<"Enter x:";
			cin>>x;
			cout<<"Enter y:";
			cin>>y;
		}
		void putdata()
		{
			cout<<"\n("<<x<<","<<y<<")";
		}
		op operator+(op p)
		{
			op temp;
			temp.x=x+p.x;
			temp.y=y+p.y;
			return temp;
		}
};
void main()
{
	clrscr();
	op o1,o2,o3;
	o1.getdata();
	o2.getdata();
	o3=o1+o2; // o3 = o1.operator+(o2)
	o1.putdata();
	o2.putdata();
	o3.putdata();
	getch();
}
