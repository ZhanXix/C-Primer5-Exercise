#include <iostream>
#include "Sales_item.h"	
using namespace std;
int main()
{
	Sales_item currBook,book;
	//currBook��������ͳ�Ƶ��鼮��book������������ 
	if(cin>>currBook){	//�����鼮 
		int count=1;	//�����뵱ǰ�鼮����ͬISBN������ۼ�¼��
		while(cin>>book){	//�������� 
			if(book.isbn()==currBook.isbn())//ISBN��ͬ 
				++count; 
			else{	//ISBN��ͬ 
				cout<<currBook.isbn()<<" "<<count<<endl;
				//�����ǰ�鼮��ISBN�����ۼ�¼��
				currBook=book;
				count=1;	//�������� 
			}
		}//while
		cout<<currBook.isbn()<<" "<<count<<endl;
		//�������鼮��ISBN�����ۼ�¼��
	}//if
	return 0;            
}//���⴦����������1.18 


