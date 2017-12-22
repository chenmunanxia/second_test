#include <iostream>
using namespace std;
class recVolume{
	public:
		void getNum();
		void computeV();
		void showNum();
	private:
		float length;
		float width;
		float height;
		float volum;
};
void recVolume::getNum(){
	cin>>length;
	cin>>width;
	cin>>height;
}
void recVolume::computeV(){
	volum=length*width*height;
}
void recVolume::showNum(){
	cout<<volum<<endl;
}
int main(int argc, char** argv) {
	recVolume a;
	a.getNum();
	a.computeV();
	a.showNum();
	return 0;
}
