#include <ostream>
#include "List.h"
#include "Node.h"
#include <stdexcept>
using namespace std;
template <typename T>
class ListLinked : public List<T> {

    private:
 
  Node<T>* first;
  int n;

    public:

  	ListLinked(){
		first=nullptr;
		n=0;
	}
	~ListLinked(){
		Node<T> *aux;
		while(first!=nullptr){
			aux=first->next;
			delete[] first;
			first=aux;
			}
		}
 	T operator[](int pos){ 
		if(pos<n){
			for(int i=0;i<pos;i++){
				first=first->next;
			}
			return first->data;
		}
		else{
			throw out_of_range("La posición no es valida"); 
		}
	}

	friend std::ostream& operator<<(std::ostream &out, const ListLinked<T> &list){
		out<<endl;
		for(int i=0;i<list.n;i++){
		out<<list.first->data<<"  ";
		list.first=list.first->next;
		}
		out<<endl;
		return out;
	}
};
