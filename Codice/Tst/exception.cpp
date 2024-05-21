#include "exception.h"

ExceptionZero::ExceptionZero(int val){
	k = val;
}

ExceptionFS::ExceptionFS(int val){
	k = val;
}

void ExceptionFS::snitch(){
	cout << "It was " << k << endl;
}

void ExceptionZero::snitch(){
	cout << "It was " << k << endl;
}
