
#include<cstdlib>
#include <iostream>
#include <string>
#include "message.h"


using namespace std;

main()
{

	string mykey="ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
	string ckkey="ABCDEFGH8JKLMNOPQRSTUVWXYZ ";
	string mymess1;
	string newmss1;
	int i;

	
	message mess1(mykey);
	message mess2(ckkey);
	message mess3(mykey);  // for use in the extra credit challange

	cout<<"bad key "<<ckkey<<endl;
	cout<<"check bad key "<<mess2.check_key()<<endl;

	cout<<"good key "<<mykey<<endl;
	cout<<"check good key "<<mess1.check_key()<<endl<<endl;

	// rotate the key one way
	mess1.rotate_key(2);
	cout<<"orignal key   "<<mykey<<endl;
	cout<<"key rotated 2 "<<mess1.get_key()<<endl<<endl;

	//reset the key to the original
	mess1.set_key(mykey);
	mess1.rotate_key(-2);// rotate 2 the otherway
	cout<<"orignal key    "<<mykey<<endl;
	cout<<"key rotated -2 "<<mess1.get_key()<<endl<<endl;

	// encrypt a simple message help me find the zen of programming
	newmss1=mess1.encrypt("help me find the zen of programming");
	cout<<newmss1<<endl;
	// decrypt it to check the methods
	cout<<mess1.decrypt(newmss1)<<endl<<endl;


	cout<<"The following message is encrypted using a simple rotation \n"; 
	cout<<"of the key can you modify the proj07.cpp to try \n";
	cout<<"all possible rotations and find the original message?\n\n";

	//" RCFMWRGIFYISDD EYRCSEYLSYWJRKZSKRSCCFNRDWRKFRJFCMWRUFDGCWORGIFTCWDJ"



	system("pause");

}
