#include "tome.h"
#include <iostream>
#include <string>
#include <cstring>


tome::tome(string name,int tomeSize,string author)
		{
			this->tomeName = name;
			this->author = author;
			this->spellsStored = tomeSize;
		}

tome::tome(string name,int tomeSize,string author,string* initialList)
		{
			tomeName = name;
			this->author = author;
			spellsStored = tomeSize;
			
			for(int i =0; i< tomeSize;i++)
			{
				references[i] = initialList[i];
			}
		}

tome::~tome()
{
	
}
tome tome::operator+(tome &add)
{
	
	int sum;
	string name;
	string array[10];
	string names = this->author + ", "+ add.author;
	sum = this->spellsStored + add.spellsStored;
	
	/*if(this->tomeName == add.tomeName)
	{
		name = tomeName;
	}*/
	
	if(this->spellsStored >= add.spellsStored)
	{
		name = tomeName;
	}
	else
	{
		name = add.tomeName;
	}
	for(int i = 0;i < spellsStored;i++)
	{
		array[i]= this->references[i];
	}
	for(int i = 0;i <add.spellsStored ;i++)
	{
		this->references[i+spellsStored]= add.references[i];
	}
	
	tome c(name,sum,names,array);
	return c; 
}

ostream &operator<<(ostream &ouput, const tome &t)
{
	ouput << "Tome Name: " << t.tomeName<<endl;
	ouput << "Auhtor: " << t.author<<endl;
	ouput << " References: ";
	for(int i = 0; i < t.spellsStored; i++)
	{
	  cout << t.references[i];
	}
	return ouput;
}


void tome::operator=(const tome &oldTome)
{
	this->tomeName = oldTome.tomeName;
	this->author = oldTome.author;
	this->spellsStored =oldTome.spellsStored;
	
	for (int i = 0;i < oldTome.spellsStored;i++)
	{
		(this->references[i] = oldTome.references[i]);
	}
	
}


string tome::getSpell(int i) const
		{
			return references[i];
		}
		
string *tome::getReferences()
		{
			return references;
		}
		
int tome::getTomeSize()
		{
			return spellsStored;
		}
