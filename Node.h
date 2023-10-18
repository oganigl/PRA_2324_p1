#include <ostream>
using namespace std;
template <typename T>
class Node {
	public:
	T data;
	Node<T>* next;

	Node(T data, Node<T>*next=nullptr){
	this->data=data;
	this->next=next;
	}
	friend std::ostream& operator<<(std::ostream&out,const Node<T> &node){
	if(node!=nullptr)
	out<<node.data<<endl;
	return out;
	}
};
