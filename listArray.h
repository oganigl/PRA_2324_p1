#ifndef LISTARRAY_H
#define LISTARRAY_H
#include <ostream>
#include <stdexcept>
#include "list.h"

template <typename T>
class ListArray{ 
	private:
		T* arr;
		int max;
		int n;
		static const int MINSIZE=2;

	public:
		listArray(){
		T* arr=new int[minisize];
		max=MINISIZE;
		n=0;
		}
		~listArray(){
		delete[] arr;
		}
		T operator[](int pos){
		if(pos>(size-1)){
		throw std::out_of_range("No existe esa posición en el array");
		}else{
		return arr[pos]			
		}}
		
		void resize(int new_size){
			
			T* aux=new int[max];
			for (int i=0;i<max;i++){
				aux[i]=arr[i];
			}
			delete[] arr;
			T* arr=new int[new_size];
			for(int i=0;i<max;i++){
				arr[i]=aux[i];
			}	
			delete[] aux;
			max=new_size;	
		}

		friend std::ostream& operator<<(std::ostream &out,const ListArray<T> &List){
		cout<<endl;
		for(int i=0;i<max;i++){
			cout<<arr[i]<<"  ";
		}
		cout<<endl;
		}

};
#endif
