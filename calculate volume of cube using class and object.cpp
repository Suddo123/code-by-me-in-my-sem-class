#include<iostream>
using namespace std;
class volume{
private:
int len;
	public:
		int setdata(int l)
		{
			len=l;
		}
		int showdata(){
			cout<<"volume of cube"<<len*len*len;
}
};
int main(){
	volume v1;
	v1.setdata(12);
	v1.showdata();
	return 0;
}
