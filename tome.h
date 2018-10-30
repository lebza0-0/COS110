#ifndef TOME_H
#define TOME_H
#include <string>
using namespace std;


class tome;

	ostream &operator<<(ostream &ouput, const tome &t);
	
class tome
{
	private:
		string references[10];
		string tomeName;
		string author;
		int spellsStored;
	
	public:
		
		tome(string name,int tomeSize,string author);
		tome(string name,int tomeSize,string author,string* initialList);
		~tome();
		
		int getTomeSize();
		string getSpell(int i) const;
		string *getReferences();
		string getAuthor()
		{
			return author;
		}
		tome operator+(tome &add);
		friend ostream &operator<<(ostream &ouput, const tome &t);
		void operator=(const tome &oldTome);
		
};
#endif