//Include Header Files
#include<conio.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<dos.h>
#include<process.h>

//This class control all the function in the menu
class MENU
{
	public:
		void main_menu(void);
		void introduction(void);
	private:
		void edit_menu(void);
		void edit_book(void);
		void edit_member(void);
};
//*************************************************************
//This class contains functions related to books
class BOOK
{
	public:
			void list(void);
			char*bookname(int);
	protected:
	//	void add_new_book(int, char tname[33], char tauther[26]), float, int, int);
		void update_copies(int, int, int);
		void modify(int, char[], char[], float);
		void deletion(void);
		int book_found(int);
		int bookname_found(int);
		int recordno(int);
		int available(int);
		char *authorname(int);
		float bookprice(int);
		int no_of_copies(int);
		int bookcodeof(char[]);
		void display(int);
		int reccount(void);
		void delete_rec(int);
	private:
		int bookcode,copies;
		char name[33],author[26];
		float price;
		int avail;
};
//This class contains functions related to members

class MEMBER
{
	public:
		void list(void);
	protected:
		void add_mem(int, int, char[], char[], char[], int, int, int);
		void modify(int, char[], char[], char[]);
		int member_found(int);
		void update_book(int, int, int, int, int );
		char *membername(int);
		char *memberphone(int);	
		char *memberaddress(int);
		int recordno(int);
		int lastcode(void);
		int issued(int);
		int fine(int);
		void display(int);
		void delete_rec(int);
	private:
		int memcode, bookcode;
		char name[26], phoen[10], address[33];
		int dd, mm, yy; //Date of returing the book	
};

//Function to extend given date by 15 days
void DATE::extend_date(int d1, int m1, int y1, int days)
{
	statoc int month[]={31,29,31,30,31,30,31,31,30,31,30,31};
	for(int i=1; i<=days; i++)
	{
		d1++
		if((d1 > month[m1-1||(y1 % 4 != 0 && m1 == 2 && d1 > 28)]))
		{
			d1 = 1;
			m1++;
		}
		{
			if(m1 > 12)
			{
				m1 = 1;
				y1++;
			}
		}
	}
	dya = d1;
	mon = m1;
	year = y1;
}
main()
{
	
	




	return 0 ;
}
