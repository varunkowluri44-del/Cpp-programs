//this pointer
#include <iostream>
using namespace std;
class counter{
	private:
		int count;
	public:
		counter(int count){
			this->count = count;
		}
		void display(){
			cout<<"count is:"<<this->count<<endl;
		}
};
int main()
{
	counter c(10);
	c.display();
	return 0;
}
