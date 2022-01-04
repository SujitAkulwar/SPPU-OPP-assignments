#include<bits/stdc++.h>
using namespace std;

int main(){
    
  typedef map < string, int >mapType;
  mapType PopulationMAp;

  PopulationMAp.insert (pair < string, int >("Maharashtra", 026357));
  PopulationMAp.insert (pair < string, int >("Andhra Pradesh", 493899));
  PopulationMAp.insert (pair < string, int >("Arunachal Pradesh", 65415));
  PopulationMAp.insert (pair < string, int >("Assam", 654855));
  PopulationMAp.insert (pair < string, int >("Madhya Pradesh", 6452584));
  PopulationMAp.insert (pair < string, int >("Goa", 6482465));

  mapType::iterator iter;
  cout <<
    "*******************Population of states of INDIA*******************" <<
    endl;
  cout << "\nSize of Population Map :: " << PopulationMAp.size () << endl;
  cout <<
    "State : \n\tMaharashtra\n\tAndhra Pradesh\n\tArunachal Pradesh\n\tAssam\n\tMadhya Pradesh\n\tGoa"
    << endl;

  string state_name;
  cout << "Enter the name of the state : ";
  cin >> state_name;
  iter = PopulationMAp.find (state_name);

  if (iter != PopulationMAp.end ())
    {
      cout << state_name << "'s Population is " << iter->second;
    }
  else
    {
      cout << "Key is not PopulationMAp" << endl;
    }
  PopulationMAp.clear ();

}


