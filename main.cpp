#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Welcome to Jason's Secret message service\n";
    cout << "Please enter your message to be encrypted\n";
    string encrypted_msg{};
    string msg;
    getline(cin,msg);
    string dec{"ZXCVBNMASDFGHJKLQWERTYUIOPzxcvbnmasdfghjklqwertyuiop"};
    string enc{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    for(char c:msg)
    {
        
        size_t pos=enc.find(c);
        if(pos!=string::npos) {
        char new_char=dec.at(pos);
        encrypted_msg+=new_char;
        }
        else {
            encrypted_msg+=c;
        }
        
    }
//    for(size_t i=0;i<msg.length();++i) {
//        for (size_t j=0;j<dec.length();++j) {
//            if (msg[i]==enc[j]) 
//                msg[i]=dec[j];
//        }
//    }
    cout << "The encrypted message is " << encrypted_msg << endl;
    cout << "Do you want to decrypt the message: (Y/N)\n";
    char choice{'a'};
    cin >> choice;
    string decrypt_msg{};
    if (choice=='Y'||choice=='y') {
//         for(size_t i=0;i<msg.length();++i) {
//        for (size_t j=0;j<dec.length();++j) {
//            if (msg[i]==dec[j]) 
//                msg[i]=enc[j];
//        }
//    }
 for(char c:encrypted_msg)
    {
        
        size_t pos=dec.find(c);
        if(pos!=string::npos) {
        char new_char=enc.at(pos);
        decrypt_msg+=new_char;
        }
        else {
            decrypt_msg+=c;
        }
        
    }

    cout << "The decrypted message is " << decrypt_msg << endl;
    }
    else {
       cout << "Thanks for using Jason messaging service\n";
        
    }
	return 0;
}
